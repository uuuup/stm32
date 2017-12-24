#ifndef NODE_H_
#define NODE_H_
extern "C" void os_printf(const char* fmt, ...);
namespace ros {
#定义节点类：增加对象,获得对象,节点本身
class Node {
public:
	Node(const char* name);
	void addSharedObject(const char* name, void* object);
	void* getSharedObject(const char* name);
	char name[32];
private:


};


} /* namespace ros */

#endif /* NODE_H_ */
