#ifndef STORAGE_HPP
#define STORAGE_HPP

class Storage {
public:
    Storage();
    Storage(int N);
    ~Storage();
    Storage(const Storage& rhs);

    void SetElement(int index, int value);
    int GetSize() const;
    int GetElement(int i) const;
    void DisplayElements() const;

private:
    int Size;
    int* ArrayOfInts;
};

#endif // STORAGE_HPP
