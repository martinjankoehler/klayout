
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
*  @file gsiDeclQOcspRevocationReason.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QOcspResponse>
#include "gsiQt.h"
#include "gsiQtNetworkCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// enum QOcspRevocationReason


//  Implementation of the enum wrapper class for ::QOcspRevocationReason
namespace qt_gsi
{

static gsi::Enum<QOcspRevocationReason> decl_QOcspRevocationReason_Enum ("QtNetwork", "QOcspRevocationReason",
    gsi::enum_const ("None", QOcspRevocationReason::None, "@brief Enum constant QOcspRevocationReason::None") +
    gsi::enum_const ("Unspecified", QOcspRevocationReason::Unspecified, "@brief Enum constant QOcspRevocationReason::Unspecified") +
    gsi::enum_const ("KeyCompromise", QOcspRevocationReason::KeyCompromise, "@brief Enum constant QOcspRevocationReason::KeyCompromise") +
    gsi::enum_const ("CACompromise", QOcspRevocationReason::CACompromise, "@brief Enum constant QOcspRevocationReason::CACompromise") +
    gsi::enum_const ("AffiliationChanged", QOcspRevocationReason::AffiliationChanged, "@brief Enum constant QOcspRevocationReason::AffiliationChanged") +
    gsi::enum_const ("Superseded", QOcspRevocationReason::Superseded, "@brief Enum constant QOcspRevocationReason::Superseded") +
    gsi::enum_const ("CessationOfOperation", QOcspRevocationReason::CessationOfOperation, "@brief Enum constant QOcspRevocationReason::CessationOfOperation") +
    gsi::enum_const ("CertificateHold", QOcspRevocationReason::CertificateHold, "@brief Enum constant QOcspRevocationReason::CertificateHold") +
    gsi::enum_const ("RemoveFromCRL", QOcspRevocationReason::RemoveFromCRL, "@brief Enum constant QOcspRevocationReason::RemoveFromCRL"),
  "@qt\n@brief This class represents the QOcspRevocationReason enum");

static gsi::QFlagsClass<QOcspRevocationReason > decl_QOcspRevocationReason_Enums ("QtNetwork", "QFlags_QOcspRevocationReason",
  "@qt\n@brief This class represents the QFlags<QOcspRevocationReason> flag set");

}

