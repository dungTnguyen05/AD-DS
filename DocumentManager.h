#ifndef DOCUMENTMANAGER_H
#define DOCUMENTMANAGER_H

#include <string>
#include <unordered_map>
#include <unordered_set>

class DocumentManager {
    private:
        struct Document {
            int docID;
            int license_limit;
            int license_available;
        };

        std::unordered_map<std::string, Document> documents;
        std::unordered_set<int> patronIDs;

    public:
        void addDocument(std::string name, int docID, int license_limit);
        void addPatron(int patronID);
        int search(std::string name); // return docid if name is in the document collection or 0 if the name is not in the collection
        bool borrowDocument(int docID, int patronID); // return true if document is borrowed, false if it cannot be borrowed (invalid patronID or the number of copies current borrowed has reached the license limit)
        void returnDocument(int docID, int patronID);
};

#endif