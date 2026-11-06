#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class PeaceConferencePanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeaceConferencePanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "PeaceConferencePanel") {}
    public:
        void Forget() const { Call("Forget", nullptr, 0); }
        void* kind() const { return ReadField<void*>("kind"); }
        void SetKind(void* value) const { WriteField<void*>("kind", value); }
        void* carve() const { return ReadField<void*>("carve"); }
        void SetCarve(void* value) const { WriteField<void*>("carve", value); }
        void* expel() const { return ReadField<void*>("expel"); }
        void SetExpel(void* value) const { WriteField<void*>("expel", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        int tiles() const { return ReadField<int>("tiles"); }
        void SetTiles(int value) const { WriteField<int>("tiles", value); }
        bool signs() const { return ReadField<bool>("signs"); }
        void SetSigns(bool value) const { WriteField<bool>("signs", value); }
        bool refused() const { return ReadField<bool>("refused"); }
        void SetRefused(bool value) const { WriteField<bool>("refused", value); }
        void* row() const { return ReadField<void*>("row"); }
        void SetRow(void* value) const { WriteField<void*>("row", value); }
        void* swatch() const { return ReadField<void*>("swatch"); }
        void SetSwatch(void* value) const { WriteField<void*>("swatch", value); }
        void* draw() const { return ReadField<void*>("draw"); }
        void SetDraw(void* value) const { WriteField<void*>("draw", value); }
        void* edit() const { return ReadField<void*>("edit"); }
        void SetEdit(void* value) const { WriteField<void*>("edit", value); }
        void* remove() const { return ReadField<void*>("remove"); }
        void SetRemove(void* value) const { WriteField<void*>("remove", value); }
        void* drawLbl() const { return ReadField<void*>("drawLbl"); }
        void SetDrawLbl(void* value) const { WriteField<void*>("drawLbl", value); }
        void* rows() const { return ReadField<void*>("rows"); }
        void* entries() const { return ReadField<void*>("entries"); }
        void* pager() const { return ReadField<void*>("pager"); }
        void SetPager(void* value) const { WriteField<void*>("pager", value); }
        void* table() const { return ReadField<void*>("table"); }
        void SetTable(void* value) const { WriteField<void*>("table", value); }
        void* empty() const { return ReadField<void*>("empty"); }
        void SetEmpty(void* value) const { WriteField<void*>("empty", value); }
        int from() const { return ReadField<int>("from"); }
        void SetFrom(int value) const { WriteField<int>("from", value); }
        int tilesCell() const { return ReadField<int>("tilesCell"); }
        void SetTilesCell(int value) const { WriteField<int>("tilesCell", value); }
        int shareCell() const { return ReadField<int>("shareCell"); }
        void SetShareCell(int value) const { WriteField<int>("shareCell", value); }
        int termsCell() const { return ReadField<int>("termsCell"); }
        void SetTermsCell(int value) const { WriteField<int>("termsCell", value); }
        int groupId() const { return ReadField<int>("groupId"); }
        void SetGroupId(int value) const { WriteField<int>("groupId", value); }
        void* row() const { return ReadField<void*>("row"); }
        void SetRow(void* value) const { WriteField<void*>("row", value); }
        void* take() const { return ReadField<void*>("take"); }
        void SetTake(void* value) const { WriteField<void*>("take", value); }
        void* raise() const { return ReadField<void*>("raise"); }
        void SetRaise(void* value) const { WriteField<void*>("raise", value); }
        void* expel() const { return ReadField<void*>("expel"); }
        void SetExpel(void* value) const { WriteField<void*>("expel", value); }
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        bool subject() const { return ReadField<bool>("subject"); }
        void SetSubject(bool value) const { WriteField<bool>("subject", value); }
        void* row() const { return ReadField<void*>("row"); }
        void SetRow(void* value) const { WriteField<void*>("row", value); }
        void* release() const { return ReadField<void*>("release"); }
        void SetRelease(void* value) const { WriteField<void*>("release", value); }
        int ideology() const { return ReadField<int>("ideology"); }
        void SetIdeology(int value) const { WriteField<int>("ideology", value); }
        bool none() const { return ReadField<bool>("none"); }
        void SetNone(bool value) const { WriteField<bool>("none", value); }
        void* button() const { return ReadField<void*>("button"); }
        void SetButton(void* value) const { WriteField<void*>("button", value); }
    };
}
