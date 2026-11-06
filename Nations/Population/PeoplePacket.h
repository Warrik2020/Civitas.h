#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Population
{
    class PeoplePacket : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeoplePacket(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Population", "PeoplePacket") {}
    public:
        void* Axis(int a) const { void* args[] = { &a }; return Call("Axis", args, 1); }
        void SetAxis(int a, void* m) const { void* args[] = { &a, &m }; Call("SetAxis", args, 2); }
        void Merge(void* o, uint32_t hash) const { void* args[] = { &o, &hash }; Call("Merge", args, 2); }
        float people() const { return ReadField<float>("people"); }
        void SetPeople(float value) const { WriteField<float>("people", value); }
        int origin() const { return ReadField<int>("origin"); }
        void SetOrigin(int value) const { WriteField<int>("origin", value); }
        void* m0() const { return ReadField<void*>("m0"); }
        void SetM0(void* value) const { WriteField<void*>("m0", value); }
        void* m1() const { return ReadField<void*>("m1"); }
        void SetM1(void* value) const { WriteField<void*>("m1", value); }
        void* m2() const { return ReadField<void*>("m2"); }
        void SetM2(void* value) const { WriteField<void*>("m2", value); }
        void* m3() const { return ReadField<void*>("m3"); }
        void SetM3(void* value) const { WriteField<void*>("m3", value); }
        void* m4() const { return ReadField<void*>("m4"); }
        void SetM4(void* value) const { WriteField<void*>("m4", value); }
    };
}
