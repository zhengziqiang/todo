#########################################################################
# File Name: rm.sh
# Author: zzq
# mail: zhengziqiang1@gmail.com
# Created Time: 2016年08月18日 星期四 14时29分44秒
#########################################################################
#!/bin/bash
#########################################################################
# File Name: rm.sh
# Author: ma6174
# mail: ma6174@163.com
# Created Time: 2016年07月13日 星期三 20时59分08秒
#########################################################################
#!/bin/bash
ls -l|awk '$1~/x/{print $NF}'|xargs rm
