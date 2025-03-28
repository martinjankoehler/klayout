
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
*  @file gsiDeclQActionGroup.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QActionGroup>
#include <QAction>
#include <QChildEvent>
#include <QEvent>
#include <QIcon>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QActionGroup

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QActionGroup::staticMetaObject);
}


// QList<QAction*> QActionGroup::actions()


static void _init_f_actions_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QAction*> > ();
}

static void _call_f_actions_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QAction*> > ((QList<QAction*>)((QActionGroup *)cls)->actions ());
}


// QAction *QActionGroup::addAction(QAction *a)


static void _init_f_addAction_1309 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("a");
  decl->add_arg<QAction * > (argspec_0);
  decl->set_return<QAction * > ();
}

static void _call_f_addAction_1309 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QAction *arg1 = gsi::arg_reader<QAction * >() (args, heap);
  ret.write<QAction * > ((QAction *)((QActionGroup *)cls)->addAction (arg1));
}


// QAction *QActionGroup::addAction(const QString &text)


static void _init_f_addAction_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("text");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QAction * > ();
}

static void _call_f_addAction_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QAction * > ((QAction *)((QActionGroup *)cls)->addAction (arg1));
}


// QAction *QActionGroup::addAction(const QIcon &icon, const QString &text)


static void _init_f_addAction_3704 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("icon");
  decl->add_arg<const QIcon & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("text");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<QAction * > ();
}

static void _call_f_addAction_3704 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QIcon &arg1 = gsi::arg_reader<const QIcon & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QAction * > ((QAction *)((QActionGroup *)cls)->addAction (arg1, arg2));
}


// QAction *QActionGroup::checkedAction()


static void _init_f_checkedAction_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QAction * > ();
}

static void _call_f_checkedAction_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAction * > ((QAction *)((QActionGroup *)cls)->checkedAction ());
}


// bool QActionGroup::isEnabled()


static void _init_f_isEnabled_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isEnabled_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QActionGroup *)cls)->isEnabled ());
}


// bool QActionGroup::isExclusive()


static void _init_f_isExclusive_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isExclusive_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QActionGroup *)cls)->isExclusive ());
}


// bool QActionGroup::isVisible()


static void _init_f_isVisible_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isVisible_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QActionGroup *)cls)->isVisible ());
}


// void QActionGroup::removeAction(QAction *a)


static void _init_f_removeAction_1309 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("a");
  decl->add_arg<QAction * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_removeAction_1309 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QAction *arg1 = gsi::arg_reader<QAction * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QActionGroup *)cls)->removeAction (arg1);
}


// void QActionGroup::setDisabled(bool b)


static void _init_f_setDisabled_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("b");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setDisabled_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QActionGroup *)cls)->setDisabled (arg1);
}


// void QActionGroup::setEnabled(bool)


static void _init_f_setEnabled_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setEnabled_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QActionGroup *)cls)->setEnabled (arg1);
}


// void QActionGroup::setExclusive(bool)


static void _init_f_setExclusive_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setExclusive_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QActionGroup *)cls)->setExclusive (arg1);
}


// void QActionGroup::setVisible(bool)


static void _init_f_setVisible_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setVisible_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QActionGroup *)cls)->setVisible (arg1);
}


// static QString QActionGroup::tr(const char *s, const char *c)


static void _init_f_tr_3354 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "0");
  decl->add_arg<const char * > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_f_tr_3354 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (0, heap);
  ret.write<QString > ((QString)QActionGroup::tr (arg1, arg2));
}


// static QString QActionGroup::tr(const char *s, const char *c, int n)


static void _init_f_tr_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_tr_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = gsi::arg_reader<const char * >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  ret.write<QString > ((QString)QActionGroup::tr (arg1, arg2, arg3));
}


// static QString QActionGroup::trUtf8(const char *s, const char *c)


static void _init_f_trUtf8_3354 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "0");
  decl->add_arg<const char * > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_3354 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (0, heap);
  ret.write<QString > ((QString)QActionGroup::trUtf8 (arg1, arg2));
}


// static QString QActionGroup::trUtf8(const char *s, const char *c, int n)


static void _init_f_trUtf8_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = gsi::arg_reader<const char * >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  ret.write<QString > ((QString)QActionGroup::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QActionGroup () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("actions", "@brief Method QList<QAction*> QActionGroup::actions()\n", true, &_init_f_actions_c0, &_call_f_actions_c0);
  methods += new qt_gsi::GenericMethod ("addAction", "@brief Method QAction *QActionGroup::addAction(QAction *a)\n", false, &_init_f_addAction_1309, &_call_f_addAction_1309);
  methods += new qt_gsi::GenericMethod ("addAction", "@brief Method QAction *QActionGroup::addAction(const QString &text)\n", false, &_init_f_addAction_2025, &_call_f_addAction_2025);
  methods += new qt_gsi::GenericMethod ("addAction", "@brief Method QAction *QActionGroup::addAction(const QIcon &icon, const QString &text)\n", false, &_init_f_addAction_3704, &_call_f_addAction_3704);
  methods += new qt_gsi::GenericMethod ("checkedAction", "@brief Method QAction *QActionGroup::checkedAction()\n", true, &_init_f_checkedAction_c0, &_call_f_checkedAction_c0);
  methods += new qt_gsi::GenericMethod ("isEnabled?|:enabled", "@brief Method bool QActionGroup::isEnabled()\n", true, &_init_f_isEnabled_c0, &_call_f_isEnabled_c0);
  methods += new qt_gsi::GenericMethod ("isExclusive?|:exclusive", "@brief Method bool QActionGroup::isExclusive()\n", true, &_init_f_isExclusive_c0, &_call_f_isExclusive_c0);
  methods += new qt_gsi::GenericMethod ("isVisible?|:visible", "@brief Method bool QActionGroup::isVisible()\n", true, &_init_f_isVisible_c0, &_call_f_isVisible_c0);
  methods += new qt_gsi::GenericMethod ("removeAction", "@brief Method void QActionGroup::removeAction(QAction *a)\n", false, &_init_f_removeAction_1309, &_call_f_removeAction_1309);
  methods += new qt_gsi::GenericMethod ("setDisabled", "@brief Method void QActionGroup::setDisabled(bool b)\n", false, &_init_f_setDisabled_864, &_call_f_setDisabled_864);
  methods += new qt_gsi::GenericMethod ("setEnabled|enabled=", "@brief Method void QActionGroup::setEnabled(bool)\n", false, &_init_f_setEnabled_864, &_call_f_setEnabled_864);
  methods += new qt_gsi::GenericMethod ("setExclusive|exclusive=", "@brief Method void QActionGroup::setExclusive(bool)\n", false, &_init_f_setExclusive_864, &_call_f_setExclusive_864);
  methods += new qt_gsi::GenericMethod ("setVisible|visible=", "@brief Method void QActionGroup::setVisible(bool)\n", false, &_init_f_setVisible_864, &_call_f_setVisible_864);
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QActionGroup::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<QAction * > ("hovered(QAction *)", "hovered", gsi::arg("arg1"), "@brief Signal declaration for QActionGroup::hovered(QAction *)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<QAction * > ("selected(QAction *)", "selected", gsi::arg("arg1"), "@brief Signal declaration for QActionGroup::selected(QAction *)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<QAction * > ("triggered(QAction *)", "triggered", gsi::arg("arg1"), "@brief Signal declaration for QActionGroup::triggered(QAction *)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QActionGroup::tr(const char *s, const char *c)\nThis method is static and can be called without an instance.", &_init_f_tr_3354, &_call_f_tr_3354);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QActionGroup::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QActionGroup::trUtf8(const char *s, const char *c)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_3354, &_call_f_trUtf8_3354);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QActionGroup::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QActionGroup> decl_QActionGroup (qtdecl_QObject (), "QtGui", "QActionGroup_Native",
  methods_QActionGroup (),
  "@hide\n@alias QActionGroup");

GSI_QTGUI_PUBLIC gsi::Class<QActionGroup> &qtdecl_QActionGroup () { return decl_QActionGroup; }

}


class QActionGroup_Adaptor : public QActionGroup, public qt_gsi::QtObjectBase
{
public:

  virtual ~QActionGroup_Adaptor();

  //  [adaptor ctor] QActionGroup::QActionGroup(QObject *parent)
  QActionGroup_Adaptor(QObject *parent) : QActionGroup(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] int QActionGroup::receivers(const char *signal)
  int fp_QActionGroup_receivers_c1731 (const char *signal) const {
    return QActionGroup::receivers(signal);
  }

  //  [expose] QObject *QActionGroup::sender()
  QObject * fp_QActionGroup_sender_c0 () const {
    return QActionGroup::sender();
  }

  //  [adaptor impl] bool QActionGroup::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QActionGroup::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QActionGroup_Adaptor, bool, QEvent *>(&QActionGroup_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QActionGroup::event(arg1);
    }
  }

  //  [adaptor impl] bool QActionGroup::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QActionGroup::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QActionGroup_Adaptor, bool, QObject *, QEvent *>(&QActionGroup_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QActionGroup::eventFilter(arg1, arg2);
    }
  }

  //  [adaptor impl] void QActionGroup::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QActionGroup::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QActionGroup_Adaptor, QChildEvent *>(&QActionGroup_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QActionGroup::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QActionGroup::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QActionGroup::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QActionGroup_Adaptor, QEvent *>(&QActionGroup_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QActionGroup::customEvent(arg1);
    }
  }

  //  [emitter impl] void QActionGroup::destroyed(QObject *)
  void emitter_QActionGroup_destroyed_1302(QObject *arg1)
  {
    emit QActionGroup::destroyed(arg1);
  }

  //  [adaptor impl] void QActionGroup::disconnectNotify(const char *signal)
  void cbs_disconnectNotify_1731_0(const char *signal)
  {
    QActionGroup::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const char *signal)
  {
    if (cb_disconnectNotify_1731_0.can_issue()) {
      cb_disconnectNotify_1731_0.issue<QActionGroup_Adaptor, const char *>(&QActionGroup_Adaptor::cbs_disconnectNotify_1731_0, signal);
    } else {
      QActionGroup::disconnectNotify(signal);
    }
  }

  //  [emitter impl] void QActionGroup::hovered(QAction *)
  void emitter_QActionGroup_hovered_1309(QAction *arg1)
  {
    emit QActionGroup::hovered(arg1);
  }

  //  [emitter impl] void QActionGroup::selected(QAction *)
  void emitter_QActionGroup_selected_1309(QAction *arg1)
  {
    emit QActionGroup::selected(arg1);
  }

  //  [adaptor impl] void QActionGroup::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QActionGroup::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QActionGroup_Adaptor, QTimerEvent *>(&QActionGroup_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QActionGroup::timerEvent(arg1);
    }
  }

  //  [emitter impl] void QActionGroup::triggered(QAction *)
  void emitter_QActionGroup_triggered_1309(QAction *arg1)
  {
    emit QActionGroup::triggered(arg1);
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_1731_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QActionGroup_Adaptor::~QActionGroup_Adaptor() { }

//  Constructor QActionGroup::QActionGroup(QObject *parent) (adaptor class)

static void _init_ctor_QActionGroup_Adaptor_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QActionGroup_Adaptor> ();
}

static void _call_ctor_QActionGroup_Adaptor_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = gsi::arg_reader<QObject * >() (args, heap);
  ret.write<QActionGroup_Adaptor *> (new QActionGroup_Adaptor (arg1));
}


// void QActionGroup::childEvent(QChildEvent *)

static void _init_cbs_childEvent_1701_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QChildEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_childEvent_1701_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QChildEvent *arg1 = args.read<QChildEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QActionGroup_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QActionGroup_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QActionGroup::customEvent(QEvent *)

static void _init_cbs_customEvent_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_customEvent_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QActionGroup_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QActionGroup_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QActionGroup::destroyed(QObject *)

static void _init_emitter_destroyed_1302 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_destroyed_1302 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (0, heap);
  ((QActionGroup_Adaptor *)cls)->emitter_QActionGroup_destroyed_1302 (arg1);
}


// void QActionGroup::disconnectNotify(const char *signal)

static void _init_cbs_disconnectNotify_1731_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_disconnectNotify_1731_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QActionGroup_Adaptor *)cls)->cbs_disconnectNotify_1731_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_1731_0 (void *cls, const gsi::Callback &cb)
{
  ((QActionGroup_Adaptor *)cls)->cb_disconnectNotify_1731_0 = cb;
}


// bool QActionGroup::event(QEvent *)

static void _init_cbs_event_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_event_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QActionGroup_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QActionGroup_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QActionGroup::eventFilter(QObject *, QEvent *)

static void _init_cbs_eventFilter_2411_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("arg2");
  decl->add_arg<QEvent * > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_cbs_eventFilter_2411_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  QEvent *arg2 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QActionGroup_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QActionGroup_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// emitter void QActionGroup::hovered(QAction *)

static void _init_emitter_hovered_1309 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QAction * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_hovered_1309 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QAction *arg1 = gsi::arg_reader<QAction * >() (args, heap);
  ((QActionGroup_Adaptor *)cls)->emitter_QActionGroup_hovered_1309 (arg1);
}


// exposed int QActionGroup::receivers(const char *signal)

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
  ret.write<int > ((int)((QActionGroup_Adaptor *)cls)->fp_QActionGroup_receivers_c1731 (arg1));
}


// emitter void QActionGroup::selected(QAction *)

static void _init_emitter_selected_1309 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QAction * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_selected_1309 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QAction *arg1 = gsi::arg_reader<QAction * >() (args, heap);
  ((QActionGroup_Adaptor *)cls)->emitter_QActionGroup_selected_1309 (arg1);
}


// exposed QObject *QActionGroup::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QActionGroup_Adaptor *)cls)->fp_QActionGroup_sender_c0 ());
}


// void QActionGroup::timerEvent(QTimerEvent *)

static void _init_cbs_timerEvent_1730_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QTimerEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_timerEvent_1730_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTimerEvent *arg1 = args.read<QTimerEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QActionGroup_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QActionGroup_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


// emitter void QActionGroup::triggered(QAction *)

static void _init_emitter_triggered_1309 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QAction * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_triggered_1309 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QAction *arg1 = gsi::arg_reader<QAction * >() (args, heap);
  ((QActionGroup_Adaptor *)cls)->emitter_QActionGroup_triggered_1309 (arg1);
}


namespace gsi
{

gsi::Class<QActionGroup> &qtdecl_QActionGroup ();

static gsi::Methods methods_QActionGroup_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QActionGroup::QActionGroup(QObject *parent)\nThis method creates an object of class QActionGroup.", &_init_ctor_QActionGroup_Adaptor_1302, &_call_ctor_QActionGroup_Adaptor_1302);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QActionGroup::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QActionGroup::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QActionGroup::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QActionGroup::disconnectNotify(const char *signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_1731_0, &_call_cbs_disconnectNotify_1731_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_1731_0, &_call_cbs_disconnectNotify_1731_0, &_set_callback_cbs_disconnectNotify_1731_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QActionGroup::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QActionGroup::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("emit_hovered", "@brief Emitter for signal void QActionGroup::hovered(QAction *)\nCall this method to emit this signal.", false, &_init_emitter_hovered_1309, &_call_emitter_hovered_1309);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QActionGroup::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("emit_selected", "@brief Emitter for signal void QActionGroup::selected(QAction *)\nCall this method to emit this signal.", false, &_init_emitter_selected_1309, &_call_emitter_selected_1309);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QActionGroup::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QActionGroup::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("emit_triggered", "@brief Emitter for signal void QActionGroup::triggered(QAction *)\nCall this method to emit this signal.", false, &_init_emitter_triggered_1309, &_call_emitter_triggered_1309);
  return methods;
}

gsi::Class<QActionGroup_Adaptor> decl_QActionGroup_Adaptor (qtdecl_QActionGroup (), "QtGui", "QActionGroup",
  methods_QActionGroup_Adaptor (),
  "@qt\n@brief Binding of QActionGroup");

}

