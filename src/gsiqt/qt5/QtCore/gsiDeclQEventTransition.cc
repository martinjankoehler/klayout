
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2025 Matthias Koefferlein

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
*  @file gsiDeclQEventTransition.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QEventTransition>
#include <QAbstractAnimation>
#include <QAbstractState>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QObject>
#include <QState>
#include <QStateMachine>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QEventTransition

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QEventTransition::staticMetaObject);
}


// QObject *QEventTransition::eventSource()


static void _init_f_eventSource_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_f_eventSource_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QEventTransition *)cls)->eventSource ());
}


// QEvent::Type QEventTransition::eventType()


static void _init_f_eventType_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QEvent::Type>::target_type > ();
}

static void _call_f_eventType_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QEvent::Type>::target_type > ((qt_gsi::Converter<QEvent::Type>::target_type)qt_gsi::CppToQtAdaptor<QEvent::Type>(((QEventTransition *)cls)->eventType ()));
}


// void QEventTransition::setEventSource(QObject *object)


static void _init_f_setEventSource_1302 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("object");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setEventSource_1302 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = gsi::arg_reader<QObject * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QEventTransition *)cls)->setEventSource (arg1);
}


// void QEventTransition::setEventType(QEvent::Type type)


static void _init_f_setEventType_1565 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<QEvent::Type>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setEventType_1565 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QEvent::Type>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QEvent::Type>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QEventTransition *)cls)->setEventType (qt_gsi::QtToCppAdaptor<QEvent::Type>(arg1).cref());
}


// static QString QEventTransition::tr(const char *s, const char *c, int n)


static void _init_f_tr_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "nullptr");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_tr_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (nullptr, heap);
  int arg3 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (-1, heap);
  ret.write<QString > ((QString)QEventTransition::tr (arg1, arg2, arg3));
}


// static QString QEventTransition::trUtf8(const char *s, const char *c, int n)


static void _init_f_trUtf8_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "nullptr");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (nullptr, heap);
  int arg3 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (-1, heap);
  ret.write<QString > ((QString)QEventTransition::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QEventTransition () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod (":eventSource", "@brief Method QObject *QEventTransition::eventSource()\n", true, &_init_f_eventSource_c0, &_call_f_eventSource_c0);
  methods += new qt_gsi::GenericMethod (":eventType", "@brief Method QEvent::Type QEventTransition::eventType()\n", true, &_init_f_eventType_c0, &_call_f_eventType_c0);
  methods += new qt_gsi::GenericMethod ("setEventSource|eventSource=", "@brief Method void QEventTransition::setEventSource(QObject *object)\n", false, &_init_f_setEventSource_1302, &_call_f_setEventSource_1302);
  methods += new qt_gsi::GenericMethod ("setEventType|eventType=", "@brief Method void QEventTransition::setEventType(QEvent::Type type)\n", false, &_init_f_setEventType_1565, &_call_f_setEventType_1565);
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QEventTransition::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<const QString & > ("objectNameChanged(const QString &)", "objectNameChanged", gsi::arg("objectName"), "@brief Signal declaration for QEventTransition::objectNameChanged(const QString &objectName)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("targetStateChanged()", "targetStateChanged", "@brief Signal declaration for QEventTransition::targetStateChanged()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("targetStatesChanged()", "targetStatesChanged", "@brief Signal declaration for QEventTransition::targetStatesChanged()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("triggered()", "triggered", "@brief Signal declaration for QEventTransition::triggered()\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QEventTransition::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QEventTransition::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QAbstractTransition> &qtdecl_QAbstractTransition ();

qt_gsi::QtNativeClass<QEventTransition> decl_QEventTransition (qtdecl_QAbstractTransition (), "QtCore", "QEventTransition_Native",
  methods_QEventTransition (),
  "@hide\n@alias QEventTransition");

GSI_QTCORE_PUBLIC gsi::Class<QEventTransition> &qtdecl_QEventTransition () { return decl_QEventTransition; }

}


class QEventTransition_Adaptor : public QEventTransition, public qt_gsi::QtObjectBase
{
public:

  virtual ~QEventTransition_Adaptor();

  //  [adaptor ctor] QEventTransition::QEventTransition(QState *sourceState)
  QEventTransition_Adaptor() : QEventTransition()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QEventTransition::QEventTransition(QState *sourceState)
  QEventTransition_Adaptor(QState *sourceState) : QEventTransition(sourceState)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QEventTransition::QEventTransition(QObject *object, QEvent::Type type, QState *sourceState)
  QEventTransition_Adaptor(QObject *object, QEvent::Type type) : QEventTransition(object, type)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QEventTransition::QEventTransition(QObject *object, QEvent::Type type, QState *sourceState)
  QEventTransition_Adaptor(QObject *object, QEvent::Type type, QState *sourceState) : QEventTransition(object, type, sourceState)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QEventTransition::isSignalConnected(const QMetaMethod &signal)
  bool fp_QEventTransition_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QEventTransition::isSignalConnected(signal);
  }

  //  [expose] int QEventTransition::receivers(const char *signal)
  int fp_QEventTransition_receivers_c1731 (const char *signal) const {
    return QEventTransition::receivers(signal);
  }

  //  [expose] QObject *QEventTransition::sender()
  QObject * fp_QEventTransition_sender_c0 () const {
    return QEventTransition::sender();
  }

  //  [expose] int QEventTransition::senderSignalIndex()
  int fp_QEventTransition_senderSignalIndex_c0 () const {
    return QEventTransition::senderSignalIndex();
  }

  //  [emitter impl] void QEventTransition::destroyed(QObject *)
  void emitter_QEventTransition_destroyed_1302(QObject *arg1)
  {
    emit QEventTransition::destroyed(arg1);
  }

  //  [adaptor impl] bool QEventTransition::eventFilter(QObject *watched, QEvent *event)
  bool cbs_eventFilter_2411_0(QObject *watched, QEvent *event)
  {
    return QEventTransition::eventFilter(watched, event);
  }

  virtual bool eventFilter(QObject *watched, QEvent *event)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QEventTransition_Adaptor, bool, QObject *, QEvent *>(&QEventTransition_Adaptor::cbs_eventFilter_2411_0, watched, event);
    } else {
      return QEventTransition::eventFilter(watched, event);
    }
  }

  //  [emitter impl] void QEventTransition::objectNameChanged(const QString &objectName)
  void emitter_QEventTransition_objectNameChanged_4567(const QString &objectName)
  {
    __SUPPRESS_UNUSED_WARNING (objectName);
    throw tl::Exception ("Can't emit private signal 'void QEventTransition::objectNameChanged(const QString &objectName)'");
  }

  //  [emitter impl] void QEventTransition::targetStateChanged()
  void emitter_QEventTransition_targetStateChanged_3938()
  {
    throw tl::Exception ("Can't emit private signal 'void QEventTransition::targetStateChanged()'");
  }

  //  [emitter impl] void QEventTransition::targetStatesChanged()
  void emitter_QEventTransition_targetStatesChanged_3938()
  {
    throw tl::Exception ("Can't emit private signal 'void QEventTransition::targetStatesChanged()'");
  }

  //  [emitter impl] void QEventTransition::triggered()
  void emitter_QEventTransition_triggered_3938()
  {
    throw tl::Exception ("Can't emit private signal 'void QEventTransition::triggered()'");
  }

  //  [adaptor impl] void QEventTransition::childEvent(QChildEvent *event)
  void cbs_childEvent_1701_0(QChildEvent *event)
  {
    QEventTransition::childEvent(event);
  }

  virtual void childEvent(QChildEvent *event)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QEventTransition_Adaptor, QChildEvent *>(&QEventTransition_Adaptor::cbs_childEvent_1701_0, event);
    } else {
      QEventTransition::childEvent(event);
    }
  }

  //  [adaptor impl] void QEventTransition::customEvent(QEvent *event)
  void cbs_customEvent_1217_0(QEvent *event)
  {
    QEventTransition::customEvent(event);
  }

  virtual void customEvent(QEvent *event)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QEventTransition_Adaptor, QEvent *>(&QEventTransition_Adaptor::cbs_customEvent_1217_0, event);
    } else {
      QEventTransition::customEvent(event);
    }
  }

  //  [adaptor impl] void QEventTransition::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QEventTransition::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QEventTransition_Adaptor, const QMetaMethod &>(&QEventTransition_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QEventTransition::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] bool QEventTransition::event(QEvent *e)
  bool cbs_event_1217_0(QEvent *e)
  {
    return QEventTransition::event(e);
  }

  virtual bool event(QEvent *e)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QEventTransition_Adaptor, bool, QEvent *>(&QEventTransition_Adaptor::cbs_event_1217_0, e);
    } else {
      return QEventTransition::event(e);
    }
  }

  //  [adaptor impl] bool QEventTransition::eventTest(QEvent *event)
  bool cbs_eventTest_1217_0(QEvent *event)
  {
    return QEventTransition::eventTest(event);
  }

  virtual bool eventTest(QEvent *event)
  {
    if (cb_eventTest_1217_0.can_issue()) {
      return cb_eventTest_1217_0.issue<QEventTransition_Adaptor, bool, QEvent *>(&QEventTransition_Adaptor::cbs_eventTest_1217_0, event);
    } else {
      return QEventTransition::eventTest(event);
    }
  }

  //  [adaptor impl] void QEventTransition::onTransition(QEvent *event)
  void cbs_onTransition_1217_0(QEvent *event)
  {
    QEventTransition::onTransition(event);
  }

  virtual void onTransition(QEvent *event)
  {
    if (cb_onTransition_1217_0.can_issue()) {
      cb_onTransition_1217_0.issue<QEventTransition_Adaptor, QEvent *>(&QEventTransition_Adaptor::cbs_onTransition_1217_0, event);
    } else {
      QEventTransition::onTransition(event);
    }
  }

  //  [adaptor impl] void QEventTransition::timerEvent(QTimerEvent *event)
  void cbs_timerEvent_1730_0(QTimerEvent *event)
  {
    QEventTransition::timerEvent(event);
  }

  virtual void timerEvent(QTimerEvent *event)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QEventTransition_Adaptor, QTimerEvent *>(&QEventTransition_Adaptor::cbs_timerEvent_1730_0, event);
    } else {
      QEventTransition::timerEvent(event);
    }
  }

  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventTest_1217_0;
  gsi::Callback cb_onTransition_1217_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QEventTransition_Adaptor::~QEventTransition_Adaptor() { }

//  Constructor QEventTransition::QEventTransition(QState *sourceState) (adaptor class)

static void _init_ctor_QEventTransition_Adaptor_1216 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("sourceState", true, "nullptr");
  decl->add_arg<QState * > (argspec_0);
  decl->set_return_new<QEventTransition_Adaptor> ();
}

static void _call_ctor_QEventTransition_Adaptor_1216 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QState *arg1 = args ? gsi::arg_reader<QState * >() (args, heap) : gsi::arg_maker<QState * >() (nullptr, heap);
  ret.write<QEventTransition_Adaptor *> (new QEventTransition_Adaptor (arg1));
}


//  Constructor QEventTransition::QEventTransition(QObject *object, QEvent::Type type, QState *sourceState) (adaptor class)

static void _init_ctor_QEventTransition_Adaptor_3867 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("object");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("type");
  decl->add_arg<const qt_gsi::Converter<QEvent::Type>::target_type & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("sourceState", true, "nullptr");
  decl->add_arg<QState * > (argspec_2);
  decl->set_return_new<QEventTransition_Adaptor> ();
}

static void _call_ctor_QEventTransition_Adaptor_3867 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = gsi::arg_reader<QObject * >() (args, heap);
  const qt_gsi::Converter<QEvent::Type>::target_type & arg2 = gsi::arg_reader<const qt_gsi::Converter<QEvent::Type>::target_type & >() (args, heap);
  QState *arg3 = args ? gsi::arg_reader<QState * >() (args, heap) : gsi::arg_maker<QState * >() (nullptr, heap);
  ret.write<QEventTransition_Adaptor *> (new QEventTransition_Adaptor (arg1, qt_gsi::QtToCppAdaptor<QEvent::Type>(arg2).cref(), arg3));
}


// void QEventTransition::childEvent(QChildEvent *event)

static void _init_cbs_childEvent_1701_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QChildEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_childEvent_1701_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QChildEvent *arg1 = args.read<QChildEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QEventTransition_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QEventTransition_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QEventTransition::customEvent(QEvent *event)

static void _init_cbs_customEvent_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_customEvent_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QEventTransition_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QEventTransition_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QEventTransition::destroyed(QObject *)

static void _init_emitter_destroyed_1302 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1", true, "nullptr");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_destroyed_1302 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (nullptr, heap);
  ((QEventTransition_Adaptor *)cls)->emitter_QEventTransition_destroyed_1302 (arg1);
}


// void QEventTransition::disconnectNotify(const QMetaMethod &signal)

static void _init_cbs_disconnectNotify_2394_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const QMetaMethod & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_disconnectNotify_2394_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaMethod &arg1 = args.read<const QMetaMethod & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QEventTransition_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QEventTransition_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QEventTransition::event(QEvent *e)

static void _init_cbs_event_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("e");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_event_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QEventTransition_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QEventTransition_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QEventTransition::eventFilter(QObject *watched, QEvent *event)

static void _init_cbs_eventFilter_2411_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("watched");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("event");
  decl->add_arg<QEvent * > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_cbs_eventFilter_2411_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  QEvent *arg2 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QEventTransition_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QEventTransition_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// bool QEventTransition::eventTest(QEvent *event)

static void _init_cbs_eventTest_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_eventTest_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QEventTransition_Adaptor *)cls)->cbs_eventTest_1217_0 (arg1));
}

static void _set_callback_cbs_eventTest_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QEventTransition_Adaptor *)cls)->cb_eventTest_1217_0 = cb;
}


// exposed bool QEventTransition::isSignalConnected(const QMetaMethod &signal)

static void _init_fp_isSignalConnected_c2394 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const QMetaMethod & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_fp_isSignalConnected_c2394 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaMethod &arg1 = gsi::arg_reader<const QMetaMethod & >() (args, heap);
  ret.write<bool > ((bool)((QEventTransition_Adaptor *)cls)->fp_QEventTransition_isSignalConnected_c2394 (arg1));
}


// emitter void QEventTransition::objectNameChanged(const QString &objectName)

static void _init_emitter_objectNameChanged_4567 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("objectName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_objectNameChanged_4567 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ((QEventTransition_Adaptor *)cls)->emitter_QEventTransition_objectNameChanged_4567 (arg1);
}


// void QEventTransition::onTransition(QEvent *event)

static void _init_cbs_onTransition_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_onTransition_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QEventTransition_Adaptor *)cls)->cbs_onTransition_1217_0 (arg1);
}

static void _set_callback_cbs_onTransition_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QEventTransition_Adaptor *)cls)->cb_onTransition_1217_0 = cb;
}


// exposed int QEventTransition::receivers(const char *signal)

static void _init_fp_receivers_c1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<int > ();
}

static void _call_fp_receivers_c1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<int > ((int)((QEventTransition_Adaptor *)cls)->fp_QEventTransition_receivers_c1731 (arg1));
}


// exposed QObject *QEventTransition::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QEventTransition_Adaptor *)cls)->fp_QEventTransition_sender_c0 ());
}


// exposed int QEventTransition::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QEventTransition_Adaptor *)cls)->fp_QEventTransition_senderSignalIndex_c0 ());
}


// emitter void QEventTransition::targetStateChanged()

static void _init_emitter_targetStateChanged_3938 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_emitter_targetStateChanged_3938 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ((QEventTransition_Adaptor *)cls)->emitter_QEventTransition_targetStateChanged_3938 ();
}


// emitter void QEventTransition::targetStatesChanged()

static void _init_emitter_targetStatesChanged_3938 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_emitter_targetStatesChanged_3938 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ((QEventTransition_Adaptor *)cls)->emitter_QEventTransition_targetStatesChanged_3938 ();
}


// void QEventTransition::timerEvent(QTimerEvent *event)

static void _init_cbs_timerEvent_1730_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QTimerEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_timerEvent_1730_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTimerEvent *arg1 = args.read<QTimerEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QEventTransition_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QEventTransition_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


// emitter void QEventTransition::triggered()

static void _init_emitter_triggered_3938 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_emitter_triggered_3938 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ((QEventTransition_Adaptor *)cls)->emitter_QEventTransition_triggered_3938 ();
}


namespace gsi
{

gsi::Class<QEventTransition> &qtdecl_QEventTransition ();

static gsi::Methods methods_QEventTransition_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QEventTransition::QEventTransition(QState *sourceState)\nThis method creates an object of class QEventTransition.", &_init_ctor_QEventTransition_Adaptor_1216, &_call_ctor_QEventTransition_Adaptor_1216);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QEventTransition::QEventTransition(QObject *object, QEvent::Type type, QState *sourceState)\nThis method creates an object of class QEventTransition.", &_init_ctor_QEventTransition_Adaptor_3867, &_call_ctor_QEventTransition_Adaptor_3867);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QEventTransition::childEvent(QChildEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QEventTransition::customEvent(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QEventTransition::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QEventTransition::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*event", "@brief Virtual method bool QEventTransition::event(QEvent *e)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("*event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QEventTransition::eventFilter(QObject *watched, QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*eventTest", "@brief Virtual method bool QEventTransition::eventTest(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventTest_1217_0, &_call_cbs_eventTest_1217_0);
  methods += new qt_gsi::GenericMethod ("*eventTest", "@hide", false, &_init_cbs_eventTest_1217_0, &_call_cbs_eventTest_1217_0, &_set_callback_cbs_eventTest_1217_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QEventTransition::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("emit_objectNameChanged", "@brief Emitter for signal void QEventTransition::objectNameChanged(const QString &objectName)\nCall this method to emit this signal.", false, &_init_emitter_objectNameChanged_4567, &_call_emitter_objectNameChanged_4567);
  methods += new qt_gsi::GenericMethod ("*onTransition", "@brief Virtual method void QEventTransition::onTransition(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_onTransition_1217_0, &_call_cbs_onTransition_1217_0);
  methods += new qt_gsi::GenericMethod ("*onTransition", "@hide", false, &_init_cbs_onTransition_1217_0, &_call_cbs_onTransition_1217_0, &_set_callback_cbs_onTransition_1217_0);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QEventTransition::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QEventTransition::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QEventTransition::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("emit_targetStateChanged", "@brief Emitter for signal void QEventTransition::targetStateChanged()\nCall this method to emit this signal.", false, &_init_emitter_targetStateChanged_3938, &_call_emitter_targetStateChanged_3938);
  methods += new qt_gsi::GenericMethod ("emit_targetStatesChanged", "@brief Emitter for signal void QEventTransition::targetStatesChanged()\nCall this method to emit this signal.", false, &_init_emitter_targetStatesChanged_3938, &_call_emitter_targetStatesChanged_3938);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QEventTransition::timerEvent(QTimerEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("emit_triggered", "@brief Emitter for signal void QEventTransition::triggered()\nCall this method to emit this signal.", false, &_init_emitter_triggered_3938, &_call_emitter_triggered_3938);
  return methods;
}

gsi::Class<QEventTransition_Adaptor> decl_QEventTransition_Adaptor (qtdecl_QEventTransition (), "QtCore", "QEventTransition",
  methods_QEventTransition_Adaptor (),
  "@qt\n@brief Binding of QEventTransition");

}

