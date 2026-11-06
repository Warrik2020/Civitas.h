#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class EquipmentPanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit EquipmentPanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "EquipmentPanel") {}
    public:
        bool ToolDesign(int designId, const char*& refusal) const { void* args[] = { &designId, &refusal }; return CallValue<bool>("ToolDesign", args, 2); }
        void ShowLine(int designId) const { void* args[] = { &designId }; Call("ShowLine", args, 1); }
        void Toggle() const { Call("Toggle", nullptr, 0); }
        void SetVisible(bool visible) const { void* args[] = { &visible }; Call("SetVisible", args, 1); }
        void* ShowPool(void** args = nullptr, int count = 0) const { return Call("ShowPool", args, count); }
        void ShowPage(void* page) const { void* args[] = { page }; Call("ShowPage", args, 1); }
        void ShowNeediest(void* page) const { void* args[] = { page }; Call("ShowNeediest", args, 1); }
        bool Prebuild() const { return CallValue<bool>("Prebuild", nullptr, 0); }
        void* bg() const { return ReadField<void*>("bg"); }
        void SetBg(void* value) const { WriteField<void*>("bg", value); }
        void* glyph() const { return ReadField<void*>("glyph"); }
        void SetGlyph(void* value) const { WriteField<void*>("glyph", value); }
        void* badge() const { return ReadField<void*>("badge"); }
        void SetBadge(void* value) const { WriteField<void*>("badge", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* figure() const { return ReadField<void*>("figure"); }
        void SetFigure(void* value) const { WriteField<void*>("figure", value); }
        void* trend() const { return ReadField<void*>("trend"); }
        void SetTrend(void* value) const { WriteField<void*>("trend", value); }
        void* outline() const { return ReadField<void*>("outline"); }
        void SetOutline(void* value) const { WriteField<void*>("outline", value); }
        void* group() const { return ReadField<void*>("group"); }
        void SetGroup(void* value) const { WriteField<void*>("group", value); }
        int severityShown() const { return ReadField<int>("severityShown"); }
        void SetSeverityShown(int value) const { WriteField<int>("severityShown", value); }
        bool lockedShown() const { return ReadField<bool>("lockedShown"); }
        void SetLockedShown(bool value) const { WriteField<bool>("lockedShown", value); }
        void* root() const { return ReadField<void*>("root"); }
        void SetRoot(void* value) const { WriteField<void*>("root", value); }
        void* bg() const { return ReadField<void*>("bg"); }
        void SetBg(void* value) const { WriteField<void*>("bg", value); }
        void* flag() const { return ReadField<void*>("flag"); }
        void SetFlag(void* value) const { WriteField<void*>("flag", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* type() const { return ReadField<void*>("type"); }
        void SetType(void* value) const { WriteField<void*>("type", value); }
        void* score() const { return ReadField<void*>("score"); }
        void SetScore(void* value) const { WriteField<void*>("score", value); }
        void* year() const { return ReadField<void*>("year"); }
        void SetYear(void* value) const { WriteField<void*>("year", value); }
        void* count() const { return ReadField<void*>("count"); }
        void SetCount(void* value) const { WriteField<void*>("count", value); }
        int designId() const { return ReadField<int>("designId"); }
        void SetDesignId(int value) const { WriteField<int>("designId", value); }
        int fromId() const { return ReadField<int>("fromId"); }
        void SetFromId(int value) const { WriteField<int>("fromId", value); }
        int flagShownId() const { return ReadField<int>("flagShownId"); }
        void SetFlagShownId(int value) const { WriteField<int>("flagShownId", value); }
        void* flagShown() const { return ReadField<void*>("flagShown"); }
        void SetFlagShown(void* value) const { WriteField<void*>("flagShown", value); }
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        void* root() const { return ReadField<void*>("root"); }
        void SetRoot(void* value) const { WriteField<void*>("root", value); }
        void* flash() const { return ReadField<void*>("flash"); }
        void SetFlash(void* value) const { WriteField<void*>("flash", value); }
        void* head() const { return ReadField<void*>("head"); }
        void SetHead(void* value) const { WriteField<void*>("head", value); }
        void* tool() const { return ReadField<void*>("tool"); }
        void SetTool(void* value) const { WriteField<void*>("tool", value); }
        void* auto_() const { return ReadField<void*>("auto"); }
        void SetAuto(void* value) const { WriteField<void*>("auto", value); }
        void* toolLabel() const { return ReadField<void*>("toolLabel"); }
        void SetToolLabel(void* value) const { WriteField<void*>("toolLabel", value); }
        void* autoLabel() const { return ReadField<void*>("autoLabel"); }
        void SetAutoLabel(void* value) const { WriteField<void*>("autoLabel", value); }
        int autoShown() const { return ReadField<int>("autoShown"); }
        void SetAutoShown(int value) const { WriteField<int>("autoShown", value); }
        int toolLit() const { return ReadField<int>("toolLit"); }
        void SetToolLit(int value) const { WriteField<int>("toolLit", value); }
        void* lines() const { return ReadField<void*>("lines"); }
        void SetLines(void* value) const { WriteField<void*>("lines", value); }
        void* pager() const { return ReadField<void*>("pager"); }
        void SetPager(void* value) const { WriteField<void*>("pager", value); }
        int showDesign() const { return ReadField<int>("showDesign"); }
        void SetShowDesign(int value) const { WriteField<int>("showDesign", value); }
        void* rows() const { return ReadField<void*>("rows"); }
        void* key() const { return ReadField<void*>("key"); }
        void SetKey(void* value) const { WriteField<void*>("key", value); }
        void* root() const { return ReadField<void*>("root"); }
        void SetRoot(void* value) const { WriteField<void*>("root", value); }
        int designId() const { return ReadField<int>("designId"); }
        void SetDesignId(int value) const { WriteField<int>("designId", value); }
        void* thumb() const { return ReadField<void*>("thumb"); }
        void SetThumb(void* value) const { WriteField<void*>("thumb", value); }
        int thumbKey() const { return ReadField<int>("thumbKey"); }
        void SetThumbKey(int value) const { WriteField<int>("thumbKey", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* sub() const { return ReadField<void*>("sub"); }
        void SetSub(void* value) const { WriteField<void*>("sub", value); }
        void* count() const { return ReadField<void*>("count"); }
        void SetCount(void* value) const { WriteField<void*>("count", value); }
        void* minus() const { return ReadField<void*>("minus"); }
        void SetMinus(void* value) const { WriteField<void*>("minus", value); }
        void* plus() const { return ReadField<void*>("plus"); }
        void SetPlus(void* value) const { WriteField<void*>("plus", value); }
        void* caption() const { return ReadField<void*>("caption"); }
        void SetCaption(void* value) const { WriteField<void*>("caption", value); }
        void* Pos() const { return ReadStaticField<void*>("Pos"); }
        void* Neg() const { return ReadStaticField<void*>("Neg"); }
        void* Warn() const { return ReadStaticField<void*>("Warn"); }
        void* Faint() const { return ReadStaticField<void*>("Faint"); }
        void* End() const { return ReadStaticField<void*>("End"); }
        float stock() const { return ReadField<float>("stock"); }
        void SetStock(float value) const { WriteField<float>("stock", value); }
        float plain() const { return ReadField<float>("plain"); }
        void SetPlain(float value) const { WriteField<float>("plain", value); }
        float production() const { return ReadField<float>("production"); }
        void SetProduction(float value) const { WriteField<float>("production", value); }
        float net() const { return ReadField<float>("net"); }
        void SetNet(float value) const { WriteField<float>("net", value); }
        int onLine() const { return ReadField<int>("onLine"); }
        void SetOnLine(int value) const { WriteField<int>("onLine", value); }
        int works() const { return ReadField<int>("works"); }
        void SetWorks(int value) const { WriteField<int>("works", value); }
        bool open() const { return ReadField<bool>("open"); }
        void SetOpen(bool value) const { WriteField<bool>("open", value); }
        bool locked() const { return ReadField<bool>("locked"); }
        void SetLocked(bool value) const { WriteField<bool>("locked", value); }
        bool starved() const { return ReadField<bool>("starved"); }
        void SetStarved(bool value) const { WriteField<bool>("starved", value); }
        bool recruitsShort() const { return ReadField<bool>("recruitsShort"); }
        void SetRecruitsShort(bool value) const { WriteField<bool>("recruitsShort", value); }
        bool contractShort() const { return ReadField<bool>("contractShort"); }
        void SetContractShort(bool value) const { WriteField<bool>("contractShort", value); }
    };
}
