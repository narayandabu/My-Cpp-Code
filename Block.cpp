#include <iostream>
#include <sstream>
#include <ctime>
#include <vector>
#include <string>
// #include <openssl/sha.h> // for SHA256 hashing
#include <iomanip>
extern "C" {
#include <openssl/sha.h>
}
// Helper function to compute SHA256 hash
std::string sha256(const std::string& input) {
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256_CTX sha256;
    SHA256_Init(&sha256);
    SHA256_Update(&sha256, input.c_str(), input.size());
    SHA256_Final(hash, &sha256);

    std::stringstream ss;
    for (int i = 0; i < SHA256_DIGEST_LENGTH; ++i) {
        ss << std::hex << std::setw(2) << std::setfill('0') << (int)hash[i];
    }
    return ss.str();
}

// Block class
class Block {
public:
    int index;             // Block index (position in chain)
    std::string data;      // Block data
    std::string prevHash;  // Hash of the previous block
    std::string hash;      // Current block hash
    time_t timestamp;      // Block timestamp

    // Block constructor
    Block(int idx, const std::string& data, const std::string& prevHash) {
        this->index = idx;
        this->data = data;
        this->prevHash = prevHash;
        this->timestamp = std::time(nullptr); // current time
        this->hash = calculateHash();
    }

    // Calculate hash of the block
    std::string calculateHash() const {
        std::stringstream ss;
        ss << index << timestamp << data << prevHash;
        return sha256(ss.str());
    }
};

// Blockchain class
class Blockchain {
public:
    // Constructor initializes the blockchain with the genesis block
    Blockchain() {
        chain.push_back(createGenesisBlock());
    }

    // Get the latest block in the chain
    Block getLatestBlock() const {
        return chain.back();
    }

    // Add a new block to the chain
    void addBlock(const std::string& data) {
        Block newBlock(chain.size(), data, getLatestBlock().hash);
        chain.push_back(newBlock);
    }

    // Display the blockchain
    void displayBlockchain() const {
        for (const auto& block : chain) {
            std::cout << "Block " << block.index << ":\n";
            std::cout << "Data: " << block.data << "\n";
            std::cout << "Timestamp: " << block.timestamp << "\n";
            std::cout << "Previous Hash: " << block.prevHash << "\n";
            std::cout << "Hash: " << block.hash << "\n\n";
        }
    }

private:
    std::vector<Block> chain;

    // Create the genesis block (first block)
    Block createGenesisBlock() {
        return Block(0, "Genesis Block", "0");
    }
};

int main() {
    // Initialize blockchain
    Blockchain myBlockchain;

    // Add some blocks
    myBlockchain.addBlock("Block 1 Data");
    myBlockchain.addBlock("Block 2 Data");
    myBlockchain.addBlock("Block 3 Data");

    // Display the blockchain
    myBlockchain.displayBlockchain();

    return 0;
}
