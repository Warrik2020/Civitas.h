#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class FrontOrder : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FrontOrder(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "FrontOrder") {}
    public:
        bool Faces(int nationId) const { void* args[] = { &nationId }; return CallValue<bool>("Faces", args, 1); }
        void* Clone() const { return Call("Clone", nullptr, 0); }
        void* foeNationIds() const { return ReadField<void*>("foeNationIds"); }
        void* section() const { return ReadField<void*>("section"); }
        void SetSection(void* value) const { WriteField<void*>("section", value); }
        void* region() const { return ReadField<void*>("region"); }
        void SetRegion(void* value) const { WriteField<void*>("region", value); }
        void* area() const { return ReadField<void*>("area"); }
        void SetArea(void* value) const { WriteField<void*>("area", value); }
        int seamLo() const { return ReadField<int>("seamLo"); }
        void SetSeamLo(int value) const { WriteField<int>("seamLo", value); }
        int seamHi() const { return ReadField<int>("seamHi"); }
        void SetSeamHi(int value) const { WriteField<int>("seamHi", value); }
    };
}
