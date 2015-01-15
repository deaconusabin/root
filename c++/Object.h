
#ifndef __Object_h__
#define __Object_h__
class Object
{
public:
	Object();
	explicit Object(int val);
	Object(const Object& obj);
	Object& operator=(const Object& obj);
	~Object();
};

#endif // __Object_h__
