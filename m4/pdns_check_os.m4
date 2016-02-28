AC_DEFUN([PDNS_CHECK_OS],[
  THREADFLAGS=""

  case "$host_os" in
  solaris2.10)
    LIBS="-lposix4 -lpthread $LIBS"
    CXXFLAGS="-D_REENTRANT $CXXFLAGS"
    have_solaris="yes"
    ;;
  solaris2.8 | solaris2.9 )
    AC_DEFINE(NEED_POSIX_TYPEDEF,,[If POSIX typedefs need to be defined])
    AC_DEFINE(NEED_INET_NTOP_PROTO,,[If your OS is so broken that it needs an additional prototype])
    LIBS="-lposix4 -lpthread $LIBS"
    CXXFLAGS="-D_REENTRANT $CXXFLAGS"
    have_solaris="yes"
    ;;
  linux*)
    THREADFLAGS="-pthread"
    have_linux="yes"
    ;;
  darwin*)
    CXXFLAGS="-D__APPLE_USE_RFC_3542 -D_XOPEN_SOURCE $CXXFLAGS"
    ;;
  freebsd*)
    THREADFLAGS="-pthread"
    have_freebsd="yes"
    ;;
  *)
    LDFLAGS="-pthread $LDFLAGS"
    CXXFLAGS="-pthread $CXXFLAGS"
    ;;
  esac

  AM_CONDITIONAL([HAVE_FREEBSD], [test "x$have_freebsd" = "xyes"])
  AM_CONDITIONAL([HAVE_LINUX], [test "x$have_linux" = "xyes"])
  AM_CONDITIONAL([HAVE_SOLARIS], [test "x$have_solaris" = "xyes"])

  AC_SUBST(THREADFLAGS)
  AC_SUBST([DYNLINKFLAGS], [-export-dynamic])
])
