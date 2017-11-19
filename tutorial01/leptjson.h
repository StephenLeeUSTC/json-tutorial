#ifndef LEPTJSON_H__
#define LEPTJSON_H__

// the type of value
typedef enum { LEPT_NULL, LEPT_FALSE, LEPT_TRUE, LEPT_NUMBER, LEPT_STRING, LEPT_ARRAY, LEPT_OBJECT } lept_type;

// the real value type is just one of the feature
typedef struct {
    lept_type type;
}lept_value;

// the status of return type
enum {
    LEPT_PARSE_OK = 0,
    LEPT_PARSE_EXPECT_VALUE,
    LEPT_PARSE_INVALID_VALUE,
    LEPT_PARSE_ROOT_NOT_SINGULAR
};

// v is the value, json is tobe frase
int lept_parse(lept_value* v, const char* json);

// the the type feature of the value
lept_type lept_get_type(const lept_value* v);

#endif /* LEPTJSON_H__ */
