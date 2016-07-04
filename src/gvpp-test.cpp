#include "gvpp.hpp"

using namespace std;
using namespace gvpp;

int main() {
    Graph<> g(true, "test");
    Node<> &n1 = g.addNode("n1", "Node 1"),
        &n2 = g.addNode("n2", "Node 2");
    SubGraph<> &sg = g.addSubGraph("sg1", true);
    Node<> &n3 = sg.addNode("n3", "Subnode 3"),
        &n4 = sg.addNode("n4", "Subnode 4");
    g.addEdge(n1, n2);
    sg.addEdge(n3, n4);
    g.addEdge(n2, n3);

    g.set(AttrType::GRAPH, "ranksep", ".5");
    g.set(AttrType::EDGE, "style", "dashed");
    g.set(AttrType::NODE, "style", "filled");
    g.set(AttrType::NODE, "shape", "octagon");
    g.set(AttrType::NODE, "fillcolor", "lightgrey");

    sg.set(AttrType::GRAPH, "style", "filled");
    sg.set(AttrType::GRAPH, "fillcolor", "grey");
    sg.set(AttrType::NODE, "fillcolor", "lightblue");
    sg.set(AttrType::NODE, "shape", "oval");
    cout << g;
    renderToFile(g, "dot", "x11");
}
