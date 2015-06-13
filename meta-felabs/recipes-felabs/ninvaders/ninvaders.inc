SUMMARY= "nInvaders classic arcade game"
HOMEPAGE= "http://invaders.sourceforge.net"
SECTION = "examples"

SRC_URI = "http://sourceforge.net/projects/${PN}/files/${PN}/${PV}\
/${PN}-${PV}.tar.gz"

DEPENDS= "ncurses"

do_compile() {
 oe_runmake
}

do_install() {
 install -d ${D}${bindir}
 install -m 0755 nInvaders ${D}${bindir}
}
