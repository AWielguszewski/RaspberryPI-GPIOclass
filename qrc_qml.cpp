/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 5.5.1
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

static const unsigned char qt_resource_data[] = {
  // /home/int-alwi/Downloads/Platform/moje/GPIO/main.qml
  0x0,0x0,0x1,0x25,
  0x69,
  0x6d,0x70,0x6f,0x72,0x74,0x20,0x51,0x74,0x51,0x75,0x69,0x63,0x6b,0x20,0x32,0x2e,
  0x33,0xa,0x69,0x6d,0x70,0x6f,0x72,0x74,0x20,0x51,0x74,0x51,0x75,0x69,0x63,0x6b,
  0x2e,0x43,0x6f,0x6e,0x74,0x72,0x6f,0x6c,0x73,0x20,0x31,0x2e,0x32,0xa,0xa,0x52,
  0x65,0x63,0x74,0x61,0x6e,0x67,0x6c,0x65,0x20,0x7b,0xa,0x20,0x20,0x20,0x20,0x69,
  0x64,0x3a,0x20,0x77,0x69,0x6e,0x64,0x6f,0x77,0xa,0x20,0x20,0x20,0x20,0x76,0x69,
  0x73,0x69,0x62,0x6c,0x65,0x3a,0x20,0x74,0x72,0x75,0x65,0xa,0x20,0x20,0x20,0x20,
  0x77,0x69,0x64,0x74,0x68,0x3a,0x20,0x31,0x39,0x32,0x30,0xa,0x20,0x20,0x20,0x20,
  0x68,0x65,0x69,0x67,0x68,0x74,0x3a,0x20,0x31,0x30,0x38,0x30,0xa,0xa,0xa,0x20,
  0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x54,0x65,0x78,0x74,0x20,0x7b,0xa,0x20,0x20,
  0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x78,0x3a,0x20,0x30,0xa,0x20,
  0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x79,0x3a,0x20,0x30,0xa,
  0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x77,0x69,0x64,0x74,
  0x68,0x3a,0x20,0x31,0x32,0x30,0xa,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
  0x20,0x20,0x20,0x74,0x65,0x78,0x74,0x3a,0x20,0x71,0x73,0x54,0x72,0x28,0x22,0x48,
  0x65,0x6c,0x6c,0x6f,0x22,0x29,0xa,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
  0x20,0x20,0x20,0x68,0x6f,0x72,0x69,0x7a,0x6f,0x6e,0x74,0x61,0x6c,0x41,0x6c,0x69,
  0x67,0x6e,0x6d,0x65,0x6e,0x74,0x3a,0x20,0x54,0x65,0x78,0x74,0x2e,0x41,0x6c,0x69,
  0x67,0x6e,0x4c,0x65,0x66,0x74,0xa,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7d,
  0xa,0xa,0x7d,0xa,
  
};

static const unsigned char qt_resource_name[] = {
  // main.qml
  0x0,0x8,
  0x8,0x1,0x5a,0x5c,
  0x0,0x6d,
  0x0,0x61,0x0,0x69,0x0,0x6e,0x0,0x2e,0x0,0x71,0x0,0x6d,0x0,0x6c,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
  // :/main.qml
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,

};

#ifdef QT_NAMESPACE
#  define QT_RCC_PREPEND_NAMESPACE(name) ::QT_NAMESPACE::name
#  define QT_RCC_MANGLE_NAMESPACE0(x) x
#  define QT_RCC_MANGLE_NAMESPACE1(a, b) a##_##b
#  define QT_RCC_MANGLE_NAMESPACE2(a, b) QT_RCC_MANGLE_NAMESPACE1(a,b)
#  define QT_RCC_MANGLE_NAMESPACE(name) QT_RCC_MANGLE_NAMESPACE2( \
        QT_RCC_MANGLE_NAMESPACE0(name), QT_RCC_MANGLE_NAMESPACE0(QT_NAMESPACE))
#else
#   define QT_RCC_PREPEND_NAMESPACE(name) name
#   define QT_RCC_MANGLE_NAMESPACE(name) name
#endif

#ifdef QT_NAMESPACE
namespace QT_NAMESPACE {
#endif

bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

bool qUnregisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

#ifdef QT_NAMESPACE
}
#endif

int QT_RCC_MANGLE_NAMESPACE(qInitResources_qml)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_qml)()
{
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (0x01, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_qml)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_qml)()
{
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (0x01, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_qml)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_qml)(); }
   } dummy;
}
