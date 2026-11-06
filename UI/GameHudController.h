#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class GameHudController : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit GameHudController(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "GameHudController") {}
    public:
        void OpenResearchTree() const { Call("OpenResearchTree", nullptr, 0); }
        void OpenWars() const { Call("OpenWars", nullptr, 0); }
        void CloseLeftDock() const { CallStatic("CloseLeftDock", nullptr, 0); }
        void OpenResearch() const { Call("OpenResearch", nullptr, 0); }
        void OpenWorks() const { Call("OpenWorks", nullptr, 0); }
        void OpenQuickActions() const { Call("OpenQuickActions", nullptr, 0); }
        void OpenPolicies() const { Call("OpenPolicies", nullptr, 0); }
        void OpenOverview(void* tab) const { void* args[] = { tab }; Call("OpenOverview", args, 1); }
        void OpenRecruitment() const { Call("OpenRecruitment", nullptr, 0); }
        void ShowArmies() const { Call("ShowArmies", nullptr, 0); }
        void OpenEquipment() const { Call("OpenEquipment", nullptr, 0); }
        void OpenPeoples() const { Call("OpenPeoples", nullptr, 0); }
        void OpenPeoplesOn(int axis, int groupId) const { void* args[] = { &axis, &groupId }; Call("OpenPeoplesOn", args, 2); }
        void OpenPeoplesDrawing(int axis, bool erase) const { void* args[] = { &axis, &erase }; Call("OpenPeoplesDrawing", args, 2); }
        void OpenEconomy() const { Call("OpenEconomy", nullptr, 0); }
        int MilitaryEquipmentTab() const { return ReadStaticField<int>("MilitaryEquipmentTab"); }
        int DiplomacyWarsTab() const { return ReadStaticField<int>("DiplomacyWarsTab"); }
        void* rt() const { return ReadField<void*>("rt"); }
        void SetRt(void* value) const { WriteField<void*>("rt", value); }
        void* text() const { return ReadField<void*>("text"); }
        void SetText(void* value) const { WriteField<void*>("text", value); }
        void* rate() const { return ReadField<void*>("rate"); }
        void SetRate(void* value) const { WriteField<void*>("rate", value); }
        void* glyph() const { return ReadField<void*>("glyph"); }
        void SetGlyph(void* value) const { WriteField<void*>("glyph", value); }
        void* sep() const { return ReadField<void*>("sep"); }
        void SetSep(void* value) const { WriteField<void*>("sep", value); }
        void* tip() const { return ReadField<void*>("tip"); }
        void SetTip(void* value) const { WriteField<void*>("tip", value); }
        void* rich() const { return ReadField<void*>("rich"); }
        void SetRich(void* value) const { WriteField<void*>("rich", value); }
        int lastHash() const { return ReadField<int>("lastHash"); }
        void SetLastHash(int value) const { WriteField<int>("lastHash", value); }
        void* lastRate() const { return ReadField<void*>("lastRate"); }
        void SetLastRate(void* value) const { WriteField<void*>("lastRate", value); }
        void* lit() const { return ReadField<void*>("lit"); }
        void SetLit(void* value) const { WriteField<void*>("lit", value); }
        void* icon() const { return ReadField<void*>("icon"); }
        void SetIcon(void* value) const { WriteField<void*>("icon", value); }
        void* idle() const { return ReadField<void*>("idle"); }
        void SetIdle(void* value) const { WriteField<void*>("idle", value); }
        void* open() const { return ReadField<void*>("open"); }
        void SetOpen(void* value) const { WriteField<void*>("open", value); }
        void* label() const { return ReadField<void*>("label"); }
        void SetLabel(void* value) const { WriteField<void*>("label", value); }
    };
}
