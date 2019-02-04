import re, sys
from xml.etree import ElementTree as ET
doc = ET.parse('/home/luis/2018-phd-luis-caiza/src/mavlink/package.xml')
ver = doc.find('version').text
if re.match('\d+\.\d+\.\d+', ver):
    sys.stdout.write(ver)
else:
    sys.stderr.write('Version format error.\n')
    sys.exit(1)
