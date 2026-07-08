#include <stdio.h>
#include <csv.h>
#include <string.h>

void cb1(void *field, size_t len, void *data) {
    printf("Feld: %.*s\n", (int)len, (char *)field);
}

void cb2(int c, void *data) {
    printf("--- Zeilenende ---\n");
}

int main(void) {
    struct csv_parser p;
    csv_init(&p, 0);

    const char *line = "Julian,30,Ingenieur\n";
    csv_parse(&p, line, strlen(line), cb1, cb2, NULL);
    csv_fini(&p, cb1, cb2, NULL);
    csv_free(&p);

    return 0;
}
