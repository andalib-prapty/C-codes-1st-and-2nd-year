struct Book {
    int book_no;
    double price;
    char book_title[20];
};

int main() {
    struct Book Book1, Book2;
    printf("Size of Book1: %zu\n", sizeof(Book1));
    printf("Size of Book2: %zu\n", sizeof(Book2));
    return 0;
}
