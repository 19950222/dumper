-[dumper]- 
- by @prxcall

dumper is a runtime field dumper for mono.

example output:
	[~] dumped UnityEngine.GUI:s_Skin: 0x38
	[~] dumped UnityEngine.GUI:s_BeginGroupHash: 0x20
	[~] dumped UnityEngine.GUI:s_ScrollviewHash: 0x24


notes: 
the method dumper is uncompleted I will possibly finish it up in my spare time later on.
this should ideally be modified to work internally to allow for dynamically grabbing offsets.