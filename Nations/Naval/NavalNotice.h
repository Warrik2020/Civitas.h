#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Naval
{
    class NavalNotice : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NavalNotice(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Naval", "NavalNotice") {}
    public:
        int kind() const { return ReadField<int>("kind"); }
        void kind(int value) const { WriteField<int>("kind", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void nationId(int value) const { WriteField<int>("nationId", value); }
        int otherNationId() const { return ReadField<int>("otherNationId"); }
        void otherNationId(int value) const { WriteField<int>("otherNationId", value); }
        int tile() const { return ReadField<int>("tile"); }
        void tile(int value) const { WriteField<int>("tile", value); }
        int unitId() const { return ReadField<int>("unitId"); }
        void unitId(int value) const { WriteField<int>("unitId", value); }
    };
}
