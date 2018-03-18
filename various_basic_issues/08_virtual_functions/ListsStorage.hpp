#ifndef LISTSTORAGE_HPP
#define LISTSTORAGE_HPP

class ListStorage {
public:
    ListStorage();
    ListStorage(int* InitList);
    ~ListStorage();
    ListStorage(const ListStorage& rhs);
protected:
    int* ProtectedHeapList;
private:
    int PrivateStackList[5];
};

#endif // LISTSTORAGE_HPP

