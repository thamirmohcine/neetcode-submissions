class DynamicArray {
    int *arr;
    int size  = 0;
    int element = 0;
public:

    DynamicArray(int capacity) {
        arr = new int[capacity];
        size = capacity;
    }

    int get(int i) {
        return arr[i];
    }

    void set(int i, int n) {
        arr[i] = n;
    }

    void pushback(int n) {
        if (element == size)
            resize();
        arr[element] = n;
        element++;
    }

    int popback() {
        int el = arr[element - 1];
        element--;
        return el;
    }

    void resize() {
        size *= 2;
        int *newarr = new int[size];
        for (int h(0); h < ((size / 2)+1);h++){
            newarr[h] = arr[h];
        }
        delete [] arr;
        arr = newarr;
    }

    int getSize() {
        return element;
    }

    int getCapacity() {
        return size;
    }
};
