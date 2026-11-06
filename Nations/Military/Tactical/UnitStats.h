#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class UnitStats : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnitStats(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "UnitStats") {}
    public:
        float meanFear() const { return ReadField<float>("meanFear"); }
        void meanFear(float value) const { WriteField<float>("meanFear", value); }
        float meanSupp() const { return ReadField<float>("meanSupp"); }
        void meanSupp(float value) const { WriteField<float>("meanSupp", value); }
        int firing() const { return ReadField<int>("firing"); }
        void firing(int value) const { WriteField<int>("firing", value); }
        int engaged() const { return ReadField<int>("engaged"); }
        void engaged(int value) const { WriteField<int>("engaged", value); }
        int pinned() const { return ReadField<int>("pinned"); }
        void pinned(int value) const { WriteField<int>("pinned", value); }
        int deaths() const { return ReadField<int>("deaths"); }
        void deaths(int value) const { WriteField<int>("deaths", value); }
        void* lo() const { return ReadField<void*>("lo"); }
        void lo(void* value) const { WriteField<void*>("lo", value); }
        void* hi() const { return ReadField<void*>("hi"); }
        void hi(void* value) const { WriteField<void*>("hi", value); }
    };
}
