#pragma once
#include <string>
#include <list>

using namespace std;

class TreeItem {
 public:
    enum class ItemType{
        INTEGER,
        STRING,
        ARRAY
    };
    TreeItem();
    void set_value(const string& new_value);
    string get_value() const;
    void set_type(const ItemType& new_type);
    ItemType get_type() const;


 private:
    TreeItem* parent;
    ItemType type;
    string value;
    list<TreeItem> child;
};
