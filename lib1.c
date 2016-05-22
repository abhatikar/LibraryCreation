#include <stdio.h>
#include <math.h>
#include <pcap.h>
int lib1function()
{
	char *dev, errbuf[PCAP_ERRBUF_SIZE];
	dev = pcap_lookupdev(errbuf);
	if (dev == NULL) {
		fprintf(stderr, "Couldn't find default device: %s\n", errbuf);
		return(2);
	}
	printf("Device: %s\n", dev);

	printf("power=%f\n",pow(2,4));
	printf("Lib1 function called\n");
	return 0;
}
