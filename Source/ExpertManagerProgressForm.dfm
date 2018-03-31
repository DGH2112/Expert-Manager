object frmProgress: TfrmProgress
  Left = 0
  Top = 0
  BorderStyle = bsNone
  Caption = 'frmProgress'
  ClientHeight = 73
  ClientWidth = 492
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  PixelsPerInch = 96
  TextHeight = 16
  object pnlEtching: TPanel
    Left = 0
    Top = 0
    Width = 492
    Height = 73
    Align = alClient
    BevelInner = bvLowered
    TabOrder = 0
    object lblInfo: TLabel
      AlignWithMargins = True
      Left = 5
      Top = 5
      Width = 482
      Height = 40
      Align = alClient
      Alignment = taCenter
      AutoSize = False
      Caption = 'lblInfo'
      Layout = tlCenter
    end
    object ProgressBar: TProgressBar
      AlignWithMargins = True
      Left = 5
      Top = 51
      Width = 482
      Height = 17
      Align = alBottom
      TabOrder = 0
    end
  end
end
