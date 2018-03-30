object frmExpertManager: TfrmExpertManager
  AlignWithMargins = True
  Left = 0
  Top = 0
  Caption = 'Expert and Package Manager for Multiple RAD Studio IDEs'
  ClientHeight = 450
  ClientWidth = 743
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  OnDestroy = FormDestroy
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 16
  object splMain: TSplitter
    Left = 233
    Top = 0
    Height = 450
  end
  object tvExpertInstallations: TTreeView
    Left = 0
    Top = 0
    Width = 233
    Height = 450
    Align = alLeft
    HideSelection = False
    Indent = 19
    ReadOnly = True
    RowSelect = True
    StateImages = ilTabStatus
    TabOrder = 0
    OnAdvancedCustomDrawItem = tvExpertInstallationsAdvancedCustomDrawItem
    OnChange = tvExpertInstallationsChange
  end
  object pagPages: TPageControl
    Left = 236
    Top = 0
    Width = 507
    Height = 450
    ActivePage = tabKnownPackages
    Align = alClient
    Images = ilTabStatus
    TabOrder = 1
    object tabExperts: TTabSheet
      Caption = '&Experts'
      object atbrExperts: TActionToolBar
        Left = 0
        Top = 0
        Width = 499
        Height = 26
        ActionManager = amActions
        Caption = 'atbrExperts'
        Color = clMenuBar
        ColorMap.DisabledFontColor = 7171437
        ColorMap.HighlightColor = clWhite
        ColorMap.BtnSelectedFont = clBlack
        ColorMap.UnusedColor = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -11
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentFont = False
        Spacing = 0
      end
      object lvInstalledExperts: TListView
        Left = 0
        Top = 26
        Width = 499
        Height = 393
        Align = alClient
        Checkboxes = True
        Columns = <
          item
            Caption = 'Key'
            Width = 150
          end
          item
            AutoSize = True
            Caption = 'Value'
          end>
        GridLines = True
        HideSelection = False
        ReadOnly = True
        RowSelect = True
        PopupMenu = pabContextMenu
        TabOrder = 1
        ViewStyle = vsReport
        OnAdvancedCustomDrawItem = lvInstalledExpertsAdvancedCustomDrawItem
        OnDblClick = lvInstalledExpertsDblClick
        OnItemChecked = lvInstalledExpertsItemChecked
      end
    end
    object tabKnownIDEPackages: TTabSheet
      Caption = 'Known &IDE Packages'
      object atbrKnownIDEPackages: TActionToolBar
        Left = 0
        Top = 0
        Width = 499
        Height = 26
        ActionManager = amActions
        Caption = 'atbrExperts'
        Color = clMenuBar
        ColorMap.DisabledFontColor = 7171437
        ColorMap.HighlightColor = clWhite
        ColorMap.BtnSelectedFont = clBlack
        ColorMap.UnusedColor = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -11
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentFont = False
        Spacing = 0
      end
      object lvKnownIDEPackages: TListView
        Left = 0
        Top = 26
        Width = 499
        Height = 393
        Align = alClient
        Checkboxes = True
        Columns = <
          item
            Caption = 'Key'
            Width = 250
          end
          item
            AutoSize = True
            Caption = 'Value'
          end>
        GridLines = True
        HideSelection = False
        ReadOnly = True
        RowSelect = True
        PopupMenu = pabContextMenu
        TabOrder = 1
        ViewStyle = vsReport
        OnAdvancedCustomDrawItem = lvInstalledExpertsAdvancedCustomDrawItem
        OnDblClick = lvKnownIDEPackagesDblClick
        OnItemChecked = lvKnownIDEPackagesItemChecked
      end
    end
    object tabKnownPackages: TTabSheet
      Caption = '&Known Packages'
      object atbrKnownPackages: TActionToolBar
        Left = 0
        Top = 0
        Width = 499
        Height = 26
        ActionManager = amActions
        Caption = 'atbrExperts'
        Color = clMenuBar
        ColorMap.DisabledFontColor = 7171437
        ColorMap.HighlightColor = clWhite
        ColorMap.BtnSelectedFont = clBlack
        ColorMap.UnusedColor = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -11
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentFont = False
        Spacing = 0
      end
      object lvKnownPackages: TListView
        Left = 0
        Top = 26
        Width = 499
        Height = 393
        Align = alClient
        Checkboxes = True
        Columns = <
          item
            Caption = 'Key'
            Width = 250
          end
          item
            AutoSize = True
            Caption = 'Value'
          end>
        GridLines = True
        HideSelection = False
        ReadOnly = True
        RowSelect = True
        PopupMenu = pabContextMenu
        TabOrder = 1
        ViewStyle = vsReport
        OnAdvancedCustomDrawItem = lvInstalledExpertsAdvancedCustomDrawItem
        OnDblClick = lvKnownPackagesDblClick
        OnItemChecked = lvKnownPackagesItemChecked
      end
    end
  end
  object amActions: TActionManager
    ActionBars = <
      item
        Items = <
          item
            Action = actAddExpert
            ImageIndex = 0
            ShortCut = 16449
          end
          item
            Action = actEditExpert
            ImageIndex = 1
            ShortCut = 16453
          end
          item
            Action = actDeleteExpert
            ImageIndex = 2
            ShortCut = 16430
          end>
        ActionBar = atbrExperts
      end
      item
        Items = <
          item
            Action = actAddKnownIDEPackage
            ImageIndex = 0
            ShortCut = 16449
          end
          item
            Action = actEditKnownIDEPackage
            ImageIndex = 1
            ShortCut = 16453
          end
          item
            Action = actDeleteKnownIDEPackage
            ImageIndex = 2
            ShortCut = 16430
          end>
        ActionBar = atbrKnownIDEPackages
      end
      item
        Items = <
          item
            Action = actAddKnownPackage
            ImageIndex = 0
            ShortCut = 16449
          end
          item
            Action = actEditKnownPackages
            ImageIndex = 1
            ShortCut = 16453
          end
          item
            Action = actDeleteKnownPackages
            ImageIndex = 2
            ShortCut = 16430
          end>
        ActionBar = atbrKnownPackages
      end>
    Images = ilImages
    Left = 88
    Top = 56
    StyleName = 'Platform Default'
    object actEditKnownPackages: TAction
      Category = 'Known Packages'
      Caption = '&Edit'
      ImageIndex = 1
      SecondaryShortCuts.Strings = (
        'Alt+E')
      ShortCut = 16453
      OnExecute = actEditKnownPackagesExecute
      OnUpdate = actEditDeleteKnownPackagesUpdate
    end
    object actAddKnownPackage: TAction
      Category = 'Known Packages'
      Caption = '&Add'
      ImageIndex = 0
      SecondaryShortCuts.Strings = (
        'Alt+A')
      ShortCut = 16449
      OnExecute = actAddKnownPackageExecute
      OnUpdate = actActionExpertUpdate
    end
    object actDeleteKnownPackages: TAction
      Category = 'Known IDE Packages'
      Caption = '&Delete'
      ImageIndex = 2
      SecondaryShortCuts.Strings = (
        'Alt+D')
      ShortCut = 16430
      OnExecute = actDeleteKnownPackagesExecute
      OnUpdate = actEditDeleteKnownPackagesUpdate
    end
    object actAddExpert: TAction
      Category = 'Experts'
      Caption = '&Add'
      ImageIndex = 0
      SecondaryShortCuts.Strings = (
        'Alt+A')
      ShortCut = 16449
      OnExecute = actAddExpertExecute
      OnUpdate = actAddExpertPackageUpdate
    end
    object actEditExpert: TAction
      Category = 'Experts'
      Caption = '&Edit'
      ImageIndex = 1
      SecondaryShortCuts.Strings = (
        'Alt+E')
      ShortCut = 16453
      OnExecute = actEditExpertExecute
      OnUpdate = actActionExpertUpdate
    end
    object actAddKnownIDEPackage: TAction
      Category = 'Known IDE Packages'
      Caption = '&Add'
      ImageIndex = 0
      SecondaryShortCuts.Strings = (
        'Alt+A')
      ShortCut = 16449
      OnExecute = actAddKnownIDEPackageExecute
    end
    object actEditKnownIDEPackage: TAction
      Category = 'Known IDE Packages'
      Caption = '&Edit'
      ImageIndex = 1
      SecondaryShortCuts.Strings = (
        'Alt+E')
      ShortCut = 16453
      OnExecute = actEditKnownIDEPackageExecute
      OnUpdate = actEditDeleteKnownIDEPackageUpdate
    end
    object actDeleteKnownIDEPackage: TAction
      Category = 'Known Packages'
      Caption = '&Delete'
      ImageIndex = 2
      SecondaryShortCuts.Strings = (
        'Alt+D')
      ShortCut = 16430
      OnExecute = actDeleteKnownIDEPackagesExecute
      OnUpdate = actEditDeleteKnownIDEPackageUpdate
    end
    object actDeleteExpert: TAction
      Category = 'Experts'
      Caption = '&Delete'
      ImageIndex = 2
      SecondaryShortCuts.Strings = (
        'Alt+D')
      ShortCut = 16430
      OnExecute = actDeleteExpertExecute
      OnUpdate = actActionExpertUpdate
    end
    object actFileExit: TAction
      Category = 'File'
      Caption = 'actFileExit'
      ShortCut = 32856
      OnExecute = actFileExitExecute
    end
  end
  object ilImages: TImageList
    Left = 88
    Top = 144
    Bitmap = {
      494C010103000800880010001000FFFFFFFFFF10FFFFFFFFFFFFFFFF424D3600
      0000000000003600000028000000400000001000000001002000000000000010
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      FF000000FF000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      FF000000FF000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000FFFFFF00FFFFFF0000000000FFFF
      FF000000000000000000FFFFFF00000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000FF000000FF000000
      FF000000FF000000FF000000FF00000000000000000000000000000000000000
      000000000000000000000000000000000000FFFF0000000000000000000000FF
      FF00FFFFFF0000FFFF00FFFFFF0000FFFF0000000000FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF0000000000000000000000FF000000FF000000
      FF000000FF000000FF000000FF00000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000FF000000FF000000
      FF000000FF000000FF000000FF00000000000000000000000000000000000000
      000000000000000000000000000000000000FFFF00000000000000FFFF00FFFF
      FF0000FFFF00FFFFFF00000000000000000000000000FFFFFF00FFFFFF00FFFF
      FF00FFFFFF0000000000FFFFFF0000000000000000000000FF000000FF000000
      FF000000FF000000FF000000FF00000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      FF000000FF000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000FFFF000000000000FFFFFF0000FF
      FF00FFFFFF0000FFFF00FFFFFF0000FFFF00FFFFFF0000000000FFFFFF000000
      000000000000FFFFFF00FFFFFF00000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      FF000000FF000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000FFFF00000000000000FFFF00FFFF
      FF0000FFFF00FFFFFF00000000000000000000000000000000000000000000FF
      FF0000000000FFFFFF00FFFFFF00000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000FFFF000000000000FFFFFF0000FF
      FF00FFFFFF0000FFFF00FFFFFF0000FFFF00FFFFFF0000FFFF00FFFFFF000000
      0000FFFFFF00FFFFFF00FFFFFF00000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000FF0000000000000000000000000000000000
      000000000000000000000000000000000000FFFF00000000000000FFFF00FFFF
      FF0000000000000000000000000000000000000000000000000000000000FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00000000000000000000000000000000000000
      0000FF0000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000FF000000FF00000000000000000000000000
      00000000000000000000000000000000000000000000000000000000000000FF
      FF00FFFFFF0000FFFF00000000000000000000FFFF0000000000FFFFFF00FFFF
      FF000000000000000000FFFFFF0000000000000000000000000000000000FF00
      0000FF0000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000FF000000FF000000FF00
      0000FF000000FF000000FF000000FF000000FF000000FF000000FF0000000000
      00000000FF000000FF0000000000000000000000000000000000000000000000
      000000000000000000000000000000FFFF0000000000FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF000000000000000000FF000000FF000000FF00
      0000FF000000FF000000FF000000FF000000FF000000FF000000FF0000000000
      00000000FF000000FF0000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000FF000000FF000000FF00
      0000FF000000FF000000FF000000FF000000FF000000FF000000FF0000000000
      00000000FF000000FF0000000000000000000000000000000000000000000000
      0000000000000000000000FFFF0000000000FFFFFF00FFFFFF00FFFFFF00FFFF
      FF000000000000000000000000000000000000000000FF000000FF000000FF00
      0000FF000000FF000000FF000000FF000000FF000000FF000000FF0000000000
      00000000FF000000FF0000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000FF000000FF00000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000FFFF0000000000FFFFFF00FFFFFF000000000000000000FFFF
      FF0000000000FFFFFF00FFFFFF0000000000000000000000000000000000FF00
      0000FF0000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000FF0000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000FFFF000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF0000000000FFFFFF0000000000000000000000000000000000000000000000
      0000FF0000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      FF00000000000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000424D3E000000000000003E000000
      2800000040000000100000000100010000000000800000000000000000000000
      000000000000000000000000FFFFFF00FFFFFC00FFFF0000E7F8FC00FFF80000
      E7F82000FFF8000081FF000081FF000081FC000081FC0000E7FC0000FFFC0000
      E7FF0000FFFF0000FFFC0000FFFC0000FEFC0000F7FC0000FE7F0000E7FF0000
      8013E000801300008013F80080130000FE7FF000E7FF0000FEF8E001F7F80000
      FFF8C403FFF80000FFFFEC07FFFF000000000000000000000000000000000000
      000000000000}
  end
  object pabContextMenu: TPopupActionBar
    Images = ilImages
    Left = 88
    Top = 240
    object Add1: TMenuItem
      Action = actAddExpert
    end
    object Edit1: TMenuItem
      Action = actEditExpert
    end
    object Delete1: TMenuItem
      Action = actDeleteExpert
    end
  end
  object ilTabStatus: TImageList
    Left = 336
    Top = 136
    Bitmap = {
      494C010104000800200010001000FFFFFFFFFF10FFFFFFFFFFFFFFFF424D3600
      0000000000003600000028000000400000002000000001002000000000000020
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000FFFF0000808000008080000080800000808000008080000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000FF4040007F0000007F0000007F0000007F0000007F0000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000008080800040404000404040004040400040404000404040000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000002020FF0000007F0000007F0000007F0000007F0000007F000000
      00000000000000000000000000000000000000000000000000000000000000FF
      FF0000FFFF0000FFFF0000FFFF0000FFFF0000FFFF0000FFFF0000FFFF000080
      800000808000000000000000000000000000000000000000000000000000FF40
      4000FF404000FF404000FF404000FF404000FF404000FF404000FF4040007F00
      00007F0000000000000000000000000000000000000000000000000000008080
      8000808080008080800080808000808080008080800080808000808080004040
      4000404040000000000000000000000000000000000000000000000000002020
      FF002020FF002020FF002020FF002020FF002020FF002020FF002020FF000000
      7F0000007F00000000000000000000000000000000000000000000FFFF0000FF
      FF0000FFFF0000FFFF0000FFFF000000FF000000FF0000FFFF0000FFFF0000FF
      FF0000FFFF000080800000000000000000000000000000000000FF404000FF40
      4000FF404000FF404000FF404000FF404000FF404000FF404000FF404000FF40
      4000FF4040007F00000000000000000000000000000000000000808080008080
      8000808080008080800080808000FFFFFF00FFFFFF0080808000808080008080
      80008080800040404000000000000000000000000000000000002020FF002020
      FF002020FF002020FF002020FF00FFFFFF00FFFFFF002020FF002020FF002020
      FF002020FF0000007F0000000000000000000000000000FFFF0000FFFF0000FF
      FF0000FFFF0000FFFF0000FFFF000000FF000000FF0000FFFF0000FFFF0000FF
      FF0000FFFF0000FFFF00008080000000000000000000FF404000FF404000FF40
      4000FF404000FF404000FF404000FF404000FF404000FF404000FF404000FF40
      4000FF404000FF4040007F000000000000000000000080808000808080008080
      8000808080008080800080808000FFFFFF00FFFFFF0080808000808080008080
      800080808000808080004040400000000000000000002020FF002020FF002020
      FF002020FF002020FF002020FF00FFFFFF00FFFFFF002020FF002020FF002020
      FF002020FF002020FF0000007F00000000000000000000FFFF0000FFFF0000FF
      FF0000FFFF0000FFFF0000FFFF0000FFFF0000FFFF0000FFFF0000FFFF0000FF
      FF0000FFFF0000FFFF00008080000000000000000000FF404000FF404000FF40
      4000FF404000FF404000FFFFFF00FFFFFF00FF404000FF404000FF404000FF40
      4000FF404000FF4040007F000000000000000000000080808000808080008080
      8000808080008080800080808000808080008080800080808000808080008080
      800080808000808080004040400000000000000000002020FF002020FF002020
      FF002020FF002020FF002020FF002020FF002020FF002020FF002020FF002020
      FF002020FF002020FF0000007F000000000000FFFF0000FFFF0000FFFF0000FF
      FF0000FFFF0000FFFF0000FFFF000000FF000000FF0000FFFF0000FFFF0000FF
      FF0000FFFF0000FFFF0000FFFF0000808000FF404000FF404000FF404000FF40
      4000FF404000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FF404000FF404000FF40
      4000FF404000FF404000FF4040007F0000008080800080808000808080008080
      8000808080008080800080808000FFFFFF00FFFFFF0080808000808080008080
      8000808080008080800080808000404040002020FF002020FF002020FF002020
      FF002020FF002020FF002020FF00FFFFFF00FFFFFF002020FF002020FF002020
      FF002020FF002020FF002020FF0000007F0080FFFF0000FFFF0000FFFF0000FF
      FF0000FFFF0000FFFF0000FFFF000000FF000000FF0000FFFF0000FFFF0000FF
      FF0000FFFF0000FFFF0000FFFF0000808000FF808000FF404000FF404000FF40
      4000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FF404000FF40
      4000FF404000FF404000FF4040007F000000C0C0C00080808000808080008080
      8000808080008080800080808000FFFFFF00FFFFFF0080808000808080008080
      8000808080008080800080808000404040008080FF002020FF002020FF002020
      FF002020FF002020FF002020FF00FFFFFF00FFFFFF002020FF002020FF002020
      FF002020FF002020FF002020FF0000007F0080FFFF0000FFFF0000FFFF0000FF
      FF0000FFFF0000FFFF0000FFFF000000FF000000FF0000FFFF0000FFFF0000FF
      FF0000FFFF0000FFFF0000FFFF0000808000FF808000FF404000FF404000FFFF
      FF00FFFFFF00FFFFFF00FF404000FF404000FFFFFF00FFFFFF00FFFFFF00FF40
      4000FF404000FF404000FF4040007F000000C0C0C00080808000808080008080
      8000808080008080800080808000FFFFFF00FFFFFF0080808000808080008080
      8000808080008080800080808000404040008080FF002020FF002020FF002020
      FF002020FF002020FF002020FF00FFFFFF00FFFFFF002020FF002020FF002020
      FF002020FF002020FF002020FF0000007F0080FFFF0000FFFF0000FFFF0000FF
      FF0000FFFF0000FFFF0000FFFF000000FF000000FF0000FFFF0000FFFF0000FF
      FF0000FFFF0000FFFF0000FFFF0000808000FF808000FF404000FFFFFF00FFFF
      FF00FFFFFF00FF404000FF404000FF404000FF404000FFFFFF00FFFFFF00FFFF
      FF00FF404000FF404000FF4040007F000000C0C0C00080808000808080008080
      8000808080008080800080808000FFFFFF00FFFFFF0080808000808080008080
      8000808080008080800080808000404040008080FF002020FF002020FF002020
      FF002020FF002020FF002020FF00FFFFFF00FFFFFF002020FF002020FF002020
      FF002020FF002020FF002020FF0000007F0080FFFF0000FFFF0000FFFF0000FF
      FF0000FFFF0000FFFF0000FFFF000000FF000000FF0000FFFF0000FFFF0000FF
      FF0000FFFF0000FFFF0000FFFF0000808000FF808000FF404000FFFFFF00FFFF
      FF00FF404000FF404000FF404000FF404000FF404000FF404000FFFFFF00FFFF
      FF00FFFFFF00FF404000FF4040007F000000C0C0C00080808000808080008080
      8000808080008080800080808000FFFFFF00FFFFFF0080808000808080008080
      8000808080008080800080808000404040008080FF002020FF002020FF002020
      FF002020FF002020FF002020FF00FFFFFF00FFFFFF002020FF002020FF002020
      FF002020FF002020FF002020FF0000007F0080FFFF0000FFFF0000FFFF0000FF
      FF0000FFFF0000FFFF0000FFFF000000FF000000FF0000FFFF0000FFFF0000FF
      FF0000FFFF0000FFFF0000FFFF0000FFFF00FF808000FF404000FF404000FF40
      4000FF404000FF404000FF404000FF404000FF404000FF404000FF404000FFFF
      FF00FFFFFF00FFFFFF00FF404000FF404000C0C0C00080808000808080008080
      8000808080008080800080808000FFFFFF00FFFFFF0080808000808080008080
      8000808080008080800080808000808080008080FF002020FF002020FF002020
      FF002020FF002020FF002020FF00FFFFFF00FFFFFF002020FF002020FF002020
      FF002020FF002020FF002020FF002020FF000000000080FFFF0000FFFF0000FF
      FF0000FFFF0000FFFF0000FFFF000000FF000000FF0000FFFF0000FFFF0000FF
      FF0000FFFF0000FFFF0000FFFF000000000000000000FF808000FF404000FF40
      4000FF404000FF404000FF404000FF404000FF404000FF404000FF404000FF40
      4000FFFFFF00FFFFFF00FF4040000000000000000000C0C0C000808080008080
      8000808080008080800080808000FFFFFF00FFFFFF0080808000808080008080
      800080808000808080008080800000000000000000008080FF002020FF002020
      FF002020FF002020FF002020FF00FFFFFF00FFFFFF002020FF002020FF002020
      FF002020FF002020FF002020FF00000000000000000080FFFF0000FFFF0000FF
      FF0000FFFF0000FFFF0000FFFF000000FF000000FF0000FFFF0000FFFF0000FF
      FF0000FFFF0000FFFF0000FFFF000000000000000000FF808000FF404000FF40
      4000FF404000FF404000FF404000FF404000FF404000FF404000FF404000FF40
      4000FF404000FF404000FF4040000000000000000000C0C0C000808080008080
      8000808080008080800080808000FFFFFF00FFFFFF0080808000808080008080
      800080808000808080008080800000000000000000008080FF002020FF002020
      FF002020FF002020FF002020FF00FFFFFF00FFFFFF002020FF002020FF002020
      FF002020FF002020FF002020FF0000000000000000000000000080FFFF0000FF
      FF0000FFFF0000FFFF0000FFFF000000FF000000FF0000FFFF0000FFFF0000FF
      FF0000FFFF0000FFFF0000000000000000000000000000000000FF808000FF40
      4000FF404000FF404000FF404000FF404000FF404000FF404000FF404000FF40
      4000FF404000FF40400000000000000000000000000000000000C0C0C0008080
      8000808080008080800080808000FFFFFF00FFFFFF0080808000808080008080
      80008080800080808000000000000000000000000000000000008080FF002020
      FF002020FF002020FF002020FF00FFFFFF00FFFFFF002020FF002020FF002020
      FF002020FF002020FF00000000000000000000000000000000000000000080FF
      FF0080FFFF0000FFFF0000FFFF0000FFFF0000FFFF0000FFFF0000FFFF0000FF
      FF0000FFFF00000000000000000000000000000000000000000000000000FF80
      8000FF808000FF404000FF404000FF404000FF404000FF404000FF404000FF40
      4000FF404000000000000000000000000000000000000000000000000000C0C0
      C000C0C0C0008080800080808000808080008080800080808000808080008080
      8000808080000000000000000000000000000000000000000000000000008080
      FF008080FF002020FF002020FF002020FF002020FF002020FF002020FF002020
      FF002020FF000000000000000000000000000000000000000000000000000000
      00000000000080FFFF0080FFFF0080FFFF0080FFFF0080FFFF0000FFFF000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000FF808000FF808000FF808000FF808000FF808000FF4040000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000C0C0C000C0C0C000C0C0C000C0C0C000C0C0C000808080000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000008080FF008080FF008080FF008080FF008080FF002020FF000000
      000000000000000000000000000000000000424D3E000000000000003E000000
      2800000040000000200000000100010000000000000100000000000000000000
      000000000000000000000000FFFFFF0000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000F81FF81FF81FF81FE007E007E007E007
      C003C003C003C003800180018001800180018001800180010000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000080018001800180018001800180018001C003C003C003C003
      E007E007E007E007F81FF81FF81FF81F00000000000000000000000000000000
      000000000000}
  end
end
