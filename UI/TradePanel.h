#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class TradePanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TradePanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "TradePanel") {}
    public:
        void Show(int playerId, int targetId, void* onResolved) const { void* args[] = { &playerId, &targetId, onResolved }; CallStatic("Show", args, 3); }
        void ShowOffer(void* offer, void* onResolved) const { void* args[] = { offer, onResolved }; CallStatic("ShowOffer", args, 2); }
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        void* button() const { return ReadField<void*>("button"); }
        void SetButton(void* value) const { WriteField<void*>("button", value); }
        void* title() const { return ReadField<void*>("title"); }
        void SetTitle(void* value) const { WriteField<void*>("title", value); }
        void* note() const { return ReadField<void*>("note"); }
        void SetNote(void* value) const { WriteField<void*>("note", value); }
        bool inGive() const { return ReadField<bool>("inGive"); }
        void SetInGive(bool value) const { WriteField<bool>("inGive", value); }
        void* head() const { return ReadField<void*>("head"); }
        void SetHead(void* value) const { WriteField<void*>("head", value); }
        void* total() const { return ReadField<void*>("total"); }
        void SetTotal(void* value) const { WriteField<void*>("total", value); }
        void* scroll() const { return ReadField<void*>("scroll"); }
        void SetScroll(void* value) const { WriteField<void*>("scroll", value); }
        void* list() const { return ReadField<void*>("list"); }
        void SetList(void* value) const { WriteField<void*>("list", value); }
        void* add() const { return ReadField<void*>("add"); }
        void SetAdd(void* value) const { WriteField<void*>("add", value); }
        void* addLabel() const { return ReadField<void*>("addLabel"); }
        void SetAddLabel(void* value) const { WriteField<void*>("addLabel", value); }
        void* picker() const { return ReadField<void*>("picker"); }
        void SetPicker(void* value) const { WriteField<void*>("picker", value); }
        void* grid() const { return ReadField<void*>("grid"); }
        void SetGrid(void* value) const { WriteField<void*>("grid", value); }
        void* entries() const { return ReadField<void*>("entries"); }
        int agreementId() const { return ReadField<int>("agreementId"); }
        void SetAgreementId(int value) const { WriteField<int>("agreementId", value); }
        int endedIndex() const { return ReadField<int>("endedIndex"); }
        void SetEndedIndex(int value) const { WriteField<int>("endedIndex", value); }
        void* icon() const { return ReadField<void*>("icon"); }
        void SetIcon(void* value) const { WriteField<void*>("icon", value); }
        void* text() const { return ReadField<void*>("text"); }
        void SetText(void* value) const { WriteField<void*>("text", value); }
        void* item() const { return ReadField<void*>("item"); }
        void SetItem(void* value) const { WriteField<void*>("item", value); }
        bool inGive() const { return ReadField<bool>("inGive"); }
        void SetInGive(bool value) const { WriteField<bool>("inGive", value); }
        void* title() const { return ReadField<void*>("title"); }
        void SetTitle(void* value) const { WriteField<void*>("title", value); }
        void* worth() const { return ReadField<void*>("worth"); }
        void SetWorth(void* value) const { WriteField<void*>("worth", value); }
        void* detail() const { return ReadField<void*>("detail"); }
        void SetDetail(void* value) const { WriteField<void*>("detail", value); }
        void* amount() const { return ReadField<void*>("amount"); }
        void SetAmount(void* value) const { WriteField<void*>("amount", value); }
        void* price() const { return ReadField<void*>("price"); }
        void SetPrice(void* value) const { WriteField<void*>("price", value); }
        void* poolPills() const { return ReadField<void*>("poolPills"); }
        void SetPoolPills(void* value) const { WriteField<void*>("poolPills", value); }
        void* poolIcons() const { return ReadField<void*>("poolIcons"); }
        void SetPoolIcons(void* value) const { WriteField<void*>("poolIcons", value); }
        void* poolName() const { return ReadField<void*>("poolName"); }
        void SetPoolName(void* value) const { WriteField<void*>("poolName", value); }
        void* manifest() const { return ReadField<void*>("manifest"); }
        void SetManifest(void* value) const { WriteField<void*>("manifest", value); }
        void* patternLabel() const { return ReadField<void*>("patternLabel"); }
        void SetPatternLabel(void* value) const { WriteField<void*>("patternLabel", value); }
        void* patternList() const { return ReadField<void*>("patternList"); }
        void SetPatternList(void* value) const { WriteField<void*>("patternList", value); }
        void* patternChoices() const { return ReadField<void*>("patternChoices"); }
        void* root() const { return ReadField<void*>("root"); }
        void SetRoot(void* value) const { WriteField<void*>("root", value); }
        void* flag() const { return ReadField<void*>("flag"); }
        void SetFlag(void* value) const { WriteField<void*>("flag", value); }
        int flagId() const { return ReadField<int>("flagId"); }
        void SetFlagId(int value) const { WriteField<int>("flagId", value); }
        void* flagSprite() const { return ReadField<void*>("flagSprite"); }
        void SetFlagSprite(void* value) const { WriteField<void*>("flagSprite", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* sub() const { return ReadField<void*>("sub"); }
        void SetSub(void* value) const { WriteField<void*>("sub", value); }
        void* score() const { return ReadField<void*>("score"); }
        void SetScore(void* value) const { WriteField<void*>("score", value); }
        void* delta() const { return ReadField<void*>("delta"); }
        void SetDelta(void* value) const { WriteField<void*>("delta", value); }
        void* root() const { return ReadField<void*>("root"); }
        void SetRoot(void* value) const { WriteField<void*>("root", value); }
        void* list() const { return ReadField<void*>("list"); }
        void SetList(void* value) const { WriteField<void*>("list", value); }
        void* head() const { return ReadField<void*>("head"); }
        void SetHead(void* value) const { WriteField<void*>("head", value); }
        void* more() const { return ReadField<void*>("more"); }
        void SetMore(void* value) const { WriteField<void*>("more", value); }
        void* rows() const { return ReadField<void*>("rows"); }
        void* root() const { return ReadField<void*>("root"); }
        void SetRoot(void* value) const { WriteField<void*>("root", value); }
        void* stores() const { return ReadField<void*>("stores"); }
        void SetStores(void* value) const { WriteField<void*>("stores", value); }
        void* works() const { return ReadField<void*>("works"); }
        void SetWorks(void* value) const { WriteField<void*>("works", value); }
        void* foot() const { return ReadField<void*>("foot"); }
        void SetFoot(void* value) const { WriteField<void*>("foot", value); }
        void* design() const { return ReadField<void*>("design"); }
        void SetDesign(void* value) const { WriteField<void*>("design", value); }
        int makerId() const { return ReadField<int>("makerId"); }
        void SetMakerId(int value) const { WriteField<int>("makerId", value); }
        float units() const { return ReadField<float>("units"); }
        void SetUnits(float value) const { WriteField<float>("units", value); }
        int works() const { return ReadField<int>("works"); }
        void SetWorks(int value) const { WriteField<int>("works", value); }
        int designId() const { return ReadField<int>("designId"); }
        void SetDesignId(int value) const { WriteField<int>("designId", value); }
        void* bg() const { return ReadField<void*>("bg"); }
        void SetBg(void* value) const { WriteField<void*>("bg", value); }
        void* row() const { return ReadField<void*>("row"); }
        void SetRow(void* value) const { WriteField<void*>("row", value); }
    };
}
