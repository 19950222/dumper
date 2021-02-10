#include "dumper.hpp"

auto main( ) -> void
{
	AllocConsole( );
	freopen_s( reinterpret_cast< FILE * * >( stdin ), "CONIN$", "r", stdin );
	freopen_s( reinterpret_cast< FILE * * >( stdout ), "CONOUT$", "w", stdout );
	SetConsoleTitleA( "[~] dumper by prxcall" );
	
	dumper::setup( "UnityEngine" );
	dumper::dump_fields( "EFT", "Player" );

	//mono::dump_methods( "UnityEngine", "GUI" ); this is uncompleted so far
	
	return; 
}

auto DllMain( void*, std::uint32_t call_reason, void* ) -> bool __stdcall
{
	if ( call_reason != DLL_PROCESS_ATTACH )
		return false;

	main( );

	return false;
}