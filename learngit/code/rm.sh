#########################################################################
# File Name: rm.sh
# Author: zzq
# mail: zhengziqiang1@gmail.com
# Created Time: 2016年10月31日 星期一 18时59分59秒
#########################################################################
#!/bin/bash
ls -l | awk '$1~/x/{
	print $NF
}' | xargs rm
