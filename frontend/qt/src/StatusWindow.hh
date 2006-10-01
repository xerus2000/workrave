// StatusWindow.hh
//
// Copyright (C) 2006 Raymond Penners <raymond@dotsphinx.com>
// All rights reserved.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2, or (at your option)
// any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// $Id: IniConfigurator.hh 558 2006-02-23 19:42:12Z rcaelers $
//

#ifndef STATUSWINDOW_HH
#define STATUSWINDOW_HH

#include <QDialog>
#include "TimerBoxView.hh"

class StatusWindow : public QDialog
{
  Q_OBJECT
  
public:
  StatusWindow();
  ~StatusWindow();

private:
  TimerBoxView *timer_box_view;
};

#endif // STATUSWINDOW_HH