
"use strict";

let FileClose = require('./FileClose.js')
let SetMavFrame = require('./SetMavFrame.js')
let CommandTOL = require('./CommandTOL.js')
let LogRequestEnd = require('./LogRequestEnd.js')
let ParamPull = require('./ParamPull.js')
let FileTruncate = require('./FileTruncate.js')
let WaypointClear = require('./WaypointClear.js')
let FileRead = require('./FileRead.js')
let FileOpen = require('./FileOpen.js')
let CommandBool = require('./CommandBool.js')
let StreamRate = require('./StreamRate.js')
let WaypointPull = require('./WaypointPull.js')
let FileMakeDir = require('./FileMakeDir.js')
let FileList = require('./FileList.js')
let FileRemove = require('./FileRemove.js')
let ParamGet = require('./ParamGet.js')
let FileChecksum = require('./FileChecksum.js')
let CommandTriggerControl = require('./CommandTriggerControl.js')
let FileRename = require('./FileRename.js')
let CommandInt = require('./CommandInt.js')
let FileWrite = require('./FileWrite.js')
let CommandHome = require('./CommandHome.js')
let ParamPush = require('./ParamPush.js')
let CommandLong = require('./CommandLong.js')
let LogRequestData = require('./LogRequestData.js')
let SetMode = require('./SetMode.js')
let WaypointSetCurrent = require('./WaypointSetCurrent.js')
let ParamSet = require('./ParamSet.js')
let WaypointPush = require('./WaypointPush.js')
let CommandTriggerInterval = require('./CommandTriggerInterval.js')
let FileRemoveDir = require('./FileRemoveDir.js')
let LogRequestList = require('./LogRequestList.js')

module.exports = {
  FileClose: FileClose,
  SetMavFrame: SetMavFrame,
  CommandTOL: CommandTOL,
  LogRequestEnd: LogRequestEnd,
  ParamPull: ParamPull,
  FileTruncate: FileTruncate,
  WaypointClear: WaypointClear,
  FileRead: FileRead,
  FileOpen: FileOpen,
  CommandBool: CommandBool,
  StreamRate: StreamRate,
  WaypointPull: WaypointPull,
  FileMakeDir: FileMakeDir,
  FileList: FileList,
  FileRemove: FileRemove,
  ParamGet: ParamGet,
  FileChecksum: FileChecksum,
  CommandTriggerControl: CommandTriggerControl,
  FileRename: FileRename,
  CommandInt: CommandInt,
  FileWrite: FileWrite,
  CommandHome: CommandHome,
  ParamPush: ParamPush,
  CommandLong: CommandLong,
  LogRequestData: LogRequestData,
  SetMode: SetMode,
  WaypointSetCurrent: WaypointSetCurrent,
  ParamSet: ParamSet,
  WaypointPush: WaypointPush,
  CommandTriggerInterval: CommandTriggerInterval,
  FileRemoveDir: FileRemoveDir,
  LogRequestList: LogRequestList,
};
