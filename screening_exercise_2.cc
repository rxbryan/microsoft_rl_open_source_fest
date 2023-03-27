#include <LuaCpp.hpp>
#include <iostream>
using namespace LuaCpp;
using namespace LuaCpp::Registry;
using namespace LuaCpp::Engine;
using namespace std;
 
int main(int argc, char** argv)
{
	// Create LuaContext object
	LuaContext ctx;

	// Try Catch Block
	try {

		// Task 2: Print “[your name] says hello” from within Lua.
		ctx.CompileStringAndRun("print('Bryan Elee says hello')");

		// Create LuaTNumber variable
		shared_ptr<Engine::LuaTNumber> num = make_shared<Engine::LuaTNumber>(25);
	 
		// Add 'num' global variable to the context
		ctx.AddGlobalVariable("num", num);
			
		// Print out the value of 'num' in Lua and Change value of an 'num' variable in Lua
		ctx.CompileString("task3", "print(\"Printing from Lua\")\n"
						"print( \"Initial value of variable = \", num)\n"
						"num = 2023");

		ctx.Run("task3");

		//  Print out value of 'num'
		cout << "Printing from C++\n" << "Value of variable after change in Lua = " <<num->getValue() << "\n";
	 
	}
	catch (runtime_error& e) {
			cout << e.what() << '\n';
	}
 
}