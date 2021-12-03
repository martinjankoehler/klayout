
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2021 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

/**
*  @file gsiDeclQInputEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QInputEvent>
#include <QInputDevice>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QInputEvent

// QInputEvent *QInputEvent::clone()


static void _init_f_clone_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QInputEvent * > ();
}

static void _call_f_clone_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QInputEvent * > ((QInputEvent *)((QInputEvent *)cls)->clone ());
}


// const QInputDevice *QInputEvent::device()


static void _init_f_device_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QInputDevice * > ();
}

static void _call_f_device_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QInputDevice * > ((const QInputDevice *)((QInputEvent *)cls)->device ());
}


// QInputDevice::DeviceType QInputEvent::deviceType()


static void _init_f_deviceType_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QInputDevice::DeviceType>::target_type > ();
}

static void _call_f_deviceType_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QInputDevice::DeviceType>::target_type > ((qt_gsi::Converter<QInputDevice::DeviceType>::target_type)qt_gsi::CppToQtAdaptor<QInputDevice::DeviceType>(((QInputEvent *)cls)->deviceType ()));
}


// QFlags<Qt::KeyboardModifier> QInputEvent::modifiers()


static void _init_f_modifiers_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<Qt::KeyboardModifier> > ();
}

static void _call_f_modifiers_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<Qt::KeyboardModifier> > ((QFlags<Qt::KeyboardModifier>)((QInputEvent *)cls)->modifiers ());
}


// void QInputEvent::setModifiers(QFlags<Qt::KeyboardModifier> modifiers)


static void _init_f_setModifiers_3077 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("modifiers");
  decl->add_arg<QFlags<Qt::KeyboardModifier> > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setModifiers_3077 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<Qt::KeyboardModifier> arg1 = gsi::arg_reader<QFlags<Qt::KeyboardModifier> >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QInputEvent *)cls)->setModifiers (arg1);
}


// void QInputEvent::setTimestamp(quint64 timestamp)


static void _init_f_setTimestamp_1103 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("timestamp");
  decl->add_arg<quint64 > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setTimestamp_1103 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  quint64 arg1 = gsi::arg_reader<quint64 >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QInputEvent *)cls)->setTimestamp (arg1);
}


// quint64 QInputEvent::timestamp()


static void _init_f_timestamp_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<quint64 > ();
}

static void _call_f_timestamp_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<quint64 > ((quint64)((QInputEvent *)cls)->timestamp ());
}


namespace gsi
{

static gsi::Methods methods_QInputEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("clone", "@brief Method QInputEvent *QInputEvent::clone()\nThis is a reimplementation of QEvent::clone", true, &_init_f_clone_c0, &_call_f_clone_c0);
  methods += new qt_gsi::GenericMethod ("device", "@brief Method const QInputDevice *QInputEvent::device()\n", true, &_init_f_device_c0, &_call_f_device_c0);
  methods += new qt_gsi::GenericMethod ("deviceType", "@brief Method QInputDevice::DeviceType QInputEvent::deviceType()\n", true, &_init_f_deviceType_c0, &_call_f_deviceType_c0);
  methods += new qt_gsi::GenericMethod (":modifiers", "@brief Method QFlags<Qt::KeyboardModifier> QInputEvent::modifiers()\n", true, &_init_f_modifiers_c0, &_call_f_modifiers_c0);
  methods += new qt_gsi::GenericMethod ("setModifiers|modifiers=", "@brief Method void QInputEvent::setModifiers(QFlags<Qt::KeyboardModifier> modifiers)\n", false, &_init_f_setModifiers_3077, &_call_f_setModifiers_3077);
  methods += new qt_gsi::GenericMethod ("setTimestamp|timestamp=", "@brief Method void QInputEvent::setTimestamp(quint64 timestamp)\n", false, &_init_f_setTimestamp_1103, &_call_f_setTimestamp_1103);
  methods += new qt_gsi::GenericMethod (":timestamp", "@brief Method quint64 QInputEvent::timestamp()\n", true, &_init_f_timestamp_c0, &_call_f_timestamp_c0);
  return methods;
}

gsi::Class<QEvent> &qtdecl_QEvent ();

gsi::Class<QInputEvent> decl_QInputEvent (qtdecl_QEvent (), "QtGui", "QInputEvent_Native",
  methods_QInputEvent (),
  "@hide\n@alias QInputEvent");

GSI_QTGUI_PUBLIC gsi::Class<QInputEvent> &qtdecl_QInputEvent () { return decl_QInputEvent; }

}


class QInputEvent_Adaptor : public QInputEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QInputEvent_Adaptor();

  //  [adaptor ctor] QInputEvent::QInputEvent(QEvent::Type type, const QInputDevice *m_dev, QFlags<Qt::KeyboardModifier> modifiers)
  QInputEvent_Adaptor(QEvent::Type type, const QInputDevice *m_dev) : QInputEvent(type, m_dev)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QInputEvent::QInputEvent(QEvent::Type type, const QInputDevice *m_dev, QFlags<Qt::KeyboardModifier> modifiers)
  QInputEvent_Adaptor(QEvent::Type type, const QInputDevice *m_dev, QFlags<Qt::KeyboardModifier> modifiers) : QInputEvent(type, m_dev, modifiers)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QInputEvent *QInputEvent::clone()
  QInputEvent * cbs_clone_c0_0() const
  {
    return QInputEvent::clone();
  }

  virtual QInputEvent * clone() const
  {
    if (cb_clone_c0_0.can_issue()) {
      return cb_clone_c0_0.issue<QInputEvent_Adaptor, QInputEvent *>(&QInputEvent_Adaptor::cbs_clone_c0_0);
    } else {
      return QInputEvent::clone();
    }
  }

  //  [adaptor impl] void QInputEvent::setAccepted(bool accepted)
  void cbs_setAccepted_864_0(bool accepted)
  {
    QInputEvent::setAccepted(accepted);
  }

  virtual void setAccepted(bool accepted)
  {
    if (cb_setAccepted_864_0.can_issue()) {
      cb_setAccepted_864_0.issue<QInputEvent_Adaptor, bool>(&QInputEvent_Adaptor::cbs_setAccepted_864_0, accepted);
    } else {
      QInputEvent::setAccepted(accepted);
    }
  }

  //  [adaptor impl] void QInputEvent::setTimestamp(quint64 timestamp)
  void cbs_setTimestamp_1103_0(quint64 timestamp)
  {
    QInputEvent::setTimestamp(timestamp);
  }

  virtual void setTimestamp(quint64 timestamp)
  {
    if (cb_setTimestamp_1103_0.can_issue()) {
      cb_setTimestamp_1103_0.issue<QInputEvent_Adaptor, quint64>(&QInputEvent_Adaptor::cbs_setTimestamp_1103_0, timestamp);
    } else {
      QInputEvent::setTimestamp(timestamp);
    }
  }

  gsi::Callback cb_clone_c0_0;
  gsi::Callback cb_setAccepted_864_0;
  gsi::Callback cb_setTimestamp_1103_0;
};

QInputEvent_Adaptor::~QInputEvent_Adaptor() { }

//  Constructor QInputEvent::QInputEvent(QEvent::Type type, const QInputDevice *m_dev, QFlags<Qt::KeyboardModifier> modifiers) (adaptor class)

static void _init_ctor_QInputEvent_Adaptor_6944 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<QEvent::Type>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("m_dev");
  decl->add_arg<const QInputDevice * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("modifiers", true, "Qt::NoModifier");
  decl->add_arg<QFlags<Qt::KeyboardModifier> > (argspec_2);
  decl->set_return_new<QInputEvent_Adaptor> ();
}

static void _call_ctor_QInputEvent_Adaptor_6944 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QEvent::Type>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QEvent::Type>::target_type & >() (args, heap);
  const QInputDevice *arg2 = gsi::arg_reader<const QInputDevice * >() (args, heap);
  QFlags<Qt::KeyboardModifier> arg3 = args ? gsi::arg_reader<QFlags<Qt::KeyboardModifier> >() (args, heap) : gsi::arg_maker<QFlags<Qt::KeyboardModifier> >() (Qt::NoModifier, heap);
  ret.write<QInputEvent_Adaptor *> (new QInputEvent_Adaptor (qt_gsi::QtToCppAdaptor<QEvent::Type>(arg1).cref(), arg2, arg3));
}


// QInputEvent *QInputEvent::clone()

static void _init_cbs_clone_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QInputEvent * > ();
}

static void _call_cbs_clone_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QInputEvent * > ((QInputEvent *)((QInputEvent_Adaptor *)cls)->cbs_clone_c0_0 ());
}

static void _set_callback_cbs_clone_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QInputEvent_Adaptor *)cls)->cb_clone_c0_0 = cb;
}


// void QInputEvent::setAccepted(bool accepted)

static void _init_cbs_setAccepted_864_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("accepted");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_setAccepted_864_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = args.read<bool > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QInputEvent_Adaptor *)cls)->cbs_setAccepted_864_0 (arg1);
}

static void _set_callback_cbs_setAccepted_864_0 (void *cls, const gsi::Callback &cb)
{
  ((QInputEvent_Adaptor *)cls)->cb_setAccepted_864_0 = cb;
}


// void QInputEvent::setTimestamp(quint64 timestamp)

static void _init_cbs_setTimestamp_1103_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("timestamp");
  decl->add_arg<quint64 > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_setTimestamp_1103_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  quint64 arg1 = args.read<quint64 > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QInputEvent_Adaptor *)cls)->cbs_setTimestamp_1103_0 (arg1);
}

static void _set_callback_cbs_setTimestamp_1103_0 (void *cls, const gsi::Callback &cb)
{
  ((QInputEvent_Adaptor *)cls)->cb_setTimestamp_1103_0 = cb;
}


namespace gsi
{

gsi::Class<QInputEvent> &qtdecl_QInputEvent ();

static gsi::Methods methods_QInputEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QInputEvent::QInputEvent(QEvent::Type type, const QInputDevice *m_dev, QFlags<Qt::KeyboardModifier> modifiers)\nThis method creates an object of class QInputEvent.", &_init_ctor_QInputEvent_Adaptor_6944, &_call_ctor_QInputEvent_Adaptor_6944);
  methods += new qt_gsi::GenericMethod ("clone", "@brief Virtual method QInputEvent *QInputEvent::clone()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_clone_c0_0, &_call_cbs_clone_c0_0);
  methods += new qt_gsi::GenericMethod ("clone", "@hide", true, &_init_cbs_clone_c0_0, &_call_cbs_clone_c0_0, &_set_callback_cbs_clone_c0_0);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@brief Virtual method void QInputEvent::setAccepted(bool accepted)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setAccepted_864_0, &_call_cbs_setAccepted_864_0);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@hide", false, &_init_cbs_setAccepted_864_0, &_call_cbs_setAccepted_864_0, &_set_callback_cbs_setAccepted_864_0);
  methods += new qt_gsi::GenericMethod ("setTimestamp", "@brief Virtual method void QInputEvent::setTimestamp(quint64 timestamp)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setTimestamp_1103_0, &_call_cbs_setTimestamp_1103_0);
  methods += new qt_gsi::GenericMethod ("setTimestamp", "@hide", false, &_init_cbs_setTimestamp_1103_0, &_call_cbs_setTimestamp_1103_0, &_set_callback_cbs_setTimestamp_1103_0);
  return methods;
}

gsi::Class<QInputEvent_Adaptor> decl_QInputEvent_Adaptor (qtdecl_QInputEvent (), "QtGui", "QInputEvent",
  methods_QInputEvent_Adaptor (),
  "@qt\n@brief Binding of QInputEvent");

}
