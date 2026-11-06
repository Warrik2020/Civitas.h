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
        bool Faces(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<bool>("Faces", __callArgs, 1); }
        void* Clone() const { return Call("Clone", nullptr, 0); }
        void* foeNationIds() const { return ReadField<void*>("foeNationIds"); }
        void* section() const { return ReadField<void*>("section"); }
        void section(void* value) const { WriteField<void*>("section", value); }
        void* region() const { return ReadField<void*>("region"); }
        void region(void* value) const { WriteField<void*>("region", value); }
        void* area() const { return ReadField<void*>("area"); }
        void area(void* value) const { WriteField<void*>("area", value); }
        int seamLo() const { return ReadField<int>("seamLo"); }
        void seamLo(int value) const { WriteField<int>("seamLo", value); }
        int seamHi() const { return ReadField<int>("seamHi"); }
        void seamHi(int value) const { WriteField<int>("seamHi", value); }
    };
}
