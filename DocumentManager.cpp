#include "DocumentManager.h"

void DocumentManager::addDocument(std::string name, int docID, int license_limit) {
    documents[name] = {docID, license_limit, license_limit};
}

void DocumentManager::addPatron(int patronID) {
    patronIDs.insert(patronID);
}

int DocumentManager::search(std::string name) {
    for (auto& it: documents) {
        if (it.first == name) {
            return it.second.docID;
        }
    }

    return 0;
}

bool DocumentManager::borrowDocument(int docID, int patronID) {
    if (patronIDs.find(patronID) == patronIDs.end()) {
        return false;
    }

    for (auto& it: documents) {
        if (it.second.docID == docID) {
            if (it.second.license_available > 0) {
                it.second.license_available--;
                return true;
            }

            return false;
        }
    }

    return false;
}

void DocumentManager::returnDocument(int docID, int patronID) {
    for (auto& it: documents) {
        if (it.second.docID == docID) {
            it.second.license_available++;
            return;
        }
    }
}