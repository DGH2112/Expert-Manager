object frmExpertEditor: TfrmExpertEditor
  Left = 0
  Top = 0
  Caption = 'Expert Editor'
  ClientHeight = 145
  ClientWidth = 559
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  DesignSize = (
    559
    145)
  PixelsPerInch = 96
  TextHeight = 16
  object lblExpertKey: TLabel
    Left = 8
    Top = 8
    Width = 73
    Height = 16
    Caption = 'Expert Name'
  end
  object lblExpertFileName: TLabel
    Left = 8
    Top = 60
    Width = 97
    Height = 16
    Caption = 'Expert File Name'
  end
  object edtExpertName: TEdit
    Left = 8
    Top = 30
    Width = 543
    Height = 24
    Anchors = [akLeft, akTop, akRight]
    TabOrder = 0
  end
  object edtExpertFileName: TEdit
    Left = 8
    Top = 82
    Width = 543
    Height = 24
    Anchors = [akLeft, akTop, akRight]
    TabOrder = 1
  end
  object btnOK: TBitBtn
    Left = 395
    Top = 112
    Width = 75
    Height = 25
    Anchors = [akRight, akBottom]
    Kind = bkOK
    NumGlyphs = 2
    TabOrder = 2
    OnClick = btnOKClick
  end
  object btnCancel: TBitBtn
    Left = 476
    Top = 112
    Width = 75
    Height = 25
    Anchors = [akRight, akBottom]
    Kind = bkCancel
    NumGlyphs = 2
    TabOrder = 3
  end
  object btnBrowse: TBitBtn
    Left = 8
    Top = 112
    Width = 145
    Height = 25
    Anchors = [akLeft, akBottom]
    Caption = 'Browse for Expert'
    Glyph.Data = {
      F6000000424DF600000000000000760000002800000010000000100000000100
      0400000000008000000000000000000000001000000000000000000000000000
      80000080000000808000800000008000800080800000C0C0C000808080000000
      FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00777777777777
      77777777777777777777000000000007777700333333333077770B0333333333
      07770FB03333333330770BFB0333333333070FBFB000000000000BFBFBFBFB07
      77770FBFBFBFBF0777770BFB0000000777777000777777770007777777777777
      7007777777770777070777777777700077777777777777777777}
    TabOrder = 4
    OnClick = btnBrowseClick
  end
  object dlgOpen: TOpenDialog
    DefaultExt = 'DLL'
    Filter = 'Expert DLLs (*.dll)|*.dll'
    Options = [ofHideReadOnly, ofPathMustExist, ofFileMustExist, ofEnableSizing, ofDontAddToRecent]
    Left = 264
    Top = 48
  end
end
