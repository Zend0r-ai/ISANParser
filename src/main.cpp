#include <iostream>
#include <string>
#include <list>
#include <iterator>

using namespace std;



//Tree Parsing()
//{
//    string rawString = this._rawData;
//    Tree parent = new Tree { Parent = null,Value = "",Children = new List<Tree>()};
//    Tree child = parent;
//
//    foreach (char c in rawString)
//    {
//        if (c == '{')
//        {
//            child = new Tree { Parent = child, Value = string.Empty, Children = new List<Tree>() };
//            child.Parent.Children.Add(child);
//        }
//        else if (c == '}')
//        {
//            child = new Tree { Parent = child.Parent.Parent, Value = string.Empty, Children = new List<Tree>() };
//            if (child.Parent != null)
//            {
//                child.Parent.Children.Add(child);
//            }
//        }
//        else
//        {
//            child.Value += c;
//        }
//    }
//
//    return parent;
//}
//void RenderTree(Tree tree, string level)
//{
//    if (tree.Value.Length > 0)
//        Console.WriteLine(level + tree.Value);
//
//    foreach (Tree t in tree.Children)
//    {
//        RenderTree(t, level + "  ");
//    }
//}

int main(int argc, const char* argv[]) {
    std::cin >> std::noskipws;

// use stream iterators to copy the stream to a string
    std::istream_iterator<char> it(std::cin);
    std::istream_iterator<char> end;
    std::string results(it, end);

    std::cout << results;
    return 0;
}
