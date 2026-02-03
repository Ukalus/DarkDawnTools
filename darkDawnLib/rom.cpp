#include <vector>
#include <cstdint>
#include <string>


// reimplemented from ndspy 
class NintendoDSRom {
    public:
        std::vector<uint8_t> name;
        std::vector<uint8_t> idCode;
        std::vector<uint8_t> developerCode;
        uint32_t unitCode; 
        uint32_t encryptionSeedSelect;
        uint32_t deviceCapacity;
        uint32_t pad015; 
        uint32_t pad016; 
        uint32_t pad017; 
        uint32_t pad108; 
        uint32_t pad019; 
        uint32_t pad01A; 
        uint32_t pad01B; 
        uint32_t pad01C; 
        uint32_t region; 
        uint32_t version; 
        uint32_t autostart;
        uint32_t arm9EntryAddress; 
        uint32_t arm9RamAddress;
        uint32_t arm7EntryAddress;
        uint32_t arm7RamAddress;
        uint32_t normalCardControlRegisterSettings; 
        uint32_t secureAreaChecksum;
        uint32_t secureTransferDelay;
        uint32_t arm9CodeSettingsPointerAddress;
        uint32_t arm7CodeSettingsPointerAddress;
        std::vector<uint8_t> secureAreaDisable;  
        std::vector<uint8_t> pad088;
        std::vector<uint8_t> nintendoLogo; 
        uint32_t debugRomAddress; 
        std::vector<uint8_t> pad16C;  
        std::vector<uint8_t> pad200;  
        std::vector<uint8_t> rsaSignature;  
        std::vector<uint8_t> arm9; 
        std::vector<uint8_t> arm9PostData;  
        std::vector<uint8_t> arm7;  
        std::vector<uint8_t> arm9OverlayTable;  
        std::vector<uint8_t> arm7OverlayTable; 
        std::vector<uint8_t> iconBanner; 
        std::vector<uint8_t> debugRom;  
        Folder filenames;
        std::vector<std::vector<uint8_t>> files;
        std::vector<uint32_t> sortedFileIds;
};

class Folder{
    public: 
        std::vector<std::pair<std::string, Folder>> folders;
        std::vector<std::string> files;
        uint32_t firstID;
};
    
    




