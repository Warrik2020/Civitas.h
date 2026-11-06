#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Military
{
    class ArmyRoster : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ArmyRoster(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Military", "ArmyRoster") {}
    public:
        bool CardSpan(float& left, float& right) const { void* args[] = { &left, &right }; return CallStaticValue<bool>("CardSpan", args, 2); }
        void* key() const { return ReadField<void*>("key"); }
        void SetKey(void* value) const { WriteField<void*>("key", value); }
        void* title() const { return ReadField<void*>("title"); }
        void SetTitle(void* value) const { WriteField<void*>("title", value); }
        void* stats() const { return ReadField<void*>("stats"); }
        void SetStats(void* value) const { WriteField<void*>("stats", value); }
        void* color() const { return ReadField<void*>("color"); }
        void SetColor(void* value) const { WriteField<void*>("color", value); }
        void* glyph() const { return ReadField<void*>("glyph"); }
        void SetGlyph(void* value) const { WriteField<void*>("glyph", value); }
        bool inHand() const { return ReadField<bool>("inHand"); }
        void SetInHand(bool value) const { WriteField<bool>("inHand", value); }
        void* onClick() const { return ReadField<void*>("onClick"); }
        void SetOnClick(void* value) const { WriteField<void*>("onClick", value); }
        void* tip() const { return ReadField<void*>("tip"); }
        void SetTip(void* value) const { WriteField<void*>("tip", value); }
        void* go() const { return ReadField<void*>("go"); }
        void SetGo(void* value) const { WriteField<void*>("go", value); }
        void* rt() const { return ReadField<void*>("rt"); }
        void SetRt(void* value) const { WriteField<void*>("rt", value); }
        void* face() const { return ReadField<void*>("face"); }
        void SetFace(void* value) const { WriteField<void*>("face", value); }
        void* crest() const { return ReadField<void*>("crest"); }
        void SetCrest(void* value) const { WriteField<void*>("crest", value); }
        void* frame() const { return ReadField<void*>("frame"); }
        void SetFrame(void* value) const { WriteField<void*>("frame", value); }
        void* digit() const { return ReadField<void*>("digit"); }
        void SetDigit(void* value) const { WriteField<void*>("digit", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* stats() const { return ReadField<void*>("stats"); }
        void SetStats(void* value) const { WriteField<void*>("stats", value); }
        void* layout() const { return ReadField<void*>("layout"); }
        void SetLayout(void* value) const { WriteField<void*>("layout", value); }
        void* badges() const { return ReadField<void*>("badges"); }
        void SetBadges(void* value) const { WriteField<void*>("badges", value); }
        void* badgeOn() const { return ReadField<void*>("badgeOn"); }
        void SetBadgeOn(void* value) const { WriteField<void*>("badgeOn", value); }
        void* del() const { return ReadField<void*>("del"); }
        void SetDel(void* value) const { WriteField<void*>("del", value); }
        void* delHover() const { return ReadField<void*>("delHover"); }
        void SetDelHover(void* value) const { WriteField<void*>("delHover", value); }
        void* kind() const { return ReadField<void*>("kind"); }
        void SetKind(void* value) const { WriteField<void*>("kind", value); }
        void* entry() const { return ReadField<void*>("entry"); }
        void SetEntry(void* value) const { WriteField<void*>("entry", value); }
        int extraIndex() const { return ReadField<int>("extraIndex"); }
        void SetExtraIndex(int value) const { WriteField<int>("extraIndex", value); }
        void* hover() const { return ReadField<void*>("hover"); }
        void SetHover(void* value) const { WriteField<void*>("hover", value); }
        void* group() const { return ReadField<void*>("group"); }
        void SetGroup(void* value) const { WriteField<void*>("group", value); }
        int divisions() const { return ReadField<int>("divisions"); }
        void SetDivisions(int value) const { WriteField<int>("divisions", value); }
        int orgPct() const { return ReadField<int>("orgPct"); }
        void SetOrgPct(int value) const { WriteField<int>("orgPct", value); }
        int fighting() const { return ReadField<int>("fighting"); }
        void SetFighting(int value) const { WriteField<int>("fighting", value); }
        int shortKit() const { return ReadField<int>("shortKit"); }
        void SetShortKit(int value) const { WriteField<int>("shortKit", value); }
        int cutOff() const { return ReadField<int>("cutOff"); }
        void SetCutOff(int value) const { WriteField<int>("cutOff", value); }
        float men() const { return ReadField<float>("men"); }
        void SetMen(float value) const { WriteField<float>("men", value); }
        float supplyMul() const { return ReadField<float>("supplyMul"); }
        void SetSupplyMul(float value) const { WriteField<float>("supplyMul", value); }
    };
}
