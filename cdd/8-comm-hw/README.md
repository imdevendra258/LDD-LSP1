  
Communicating with Hardware:
---------------------------

Types of Address Spaces: 
-----------------------
1. Based on Architecture two types:
   Physical address and Bus address:
   
	The addresses referring to RAM are termed as physical addresses, 
	and those referring to device maps as bus addresses, since these 
	devices are always mapped through some architecture-specific bus. 

	for example, the PCI bus in the x86 architecture, the AMBA bus in 
	ARM architectures, the SuperHyway bus in SuperH architectures, etc.

	All the architecture-dependent values of these physical and bus addresses are 
	either dynamically configurable, or are to be obtained from the data-sheets 
	(i.e., hardware manuals) of the corresponding architecture processors/controllers. 

2. Based on OS two types:
   Virtual Address (Swappable) and Logical Address (Non-Swappable):
The below Examples Explain how to Driver communicate with hardware.

- ioports : This examples explain driver how to communicate ioports.
        ioport device examples:
        1. Parallel Port
        2. Serial Port
        3. RTC

- iomemory: This examples explain driver how to communicate iomemory.
        iomemory device example:
        Video RAM

we discuss about Memory Barrier conecpts.

