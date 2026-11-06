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
        void* Axis(int a) const { void* __callArgs[] = { &a }; return Call("Axis", __callArgs, 1); }
        void SetAxis(int a, void* m) const { void* __callArgs[] = { &a, &m }; Call("SetAxis", __callArgs, 2); }
        void Merge(void* o, uint32_t hash) const { void* __callArgs[] = { &o, &hash }; Call("Merge", __callArgs, 2); }
        float people() const { return ReadField<float>("people"); }
        void people(float value) const { WriteField<float>("people", value); }
        int origin() const { return ReadField<int>("origin"); }
        void origin(int value) const { WriteField<int>("origin", value); }
        void* m0() const { return ReadField<void*>("m0"); }
        void m0(void* value) const { WriteField<void*>("m0", value); }
        void* m1() const { return ReadField<void*>("m1"); }
        void m1(void* value) const { WriteField<void*>("m1", value); }
        void* m2() const { return ReadField<void*>("m2"); }
        void m2(void* value) const { WriteField<void*>("m2", value); }
        void* m3() const { return ReadField<void*>("m3"); }
        void m3(void* value) const { WriteField<void*>("m3", value); }
        void* m4() const { return ReadField<void*>("m4"); }
        void m4(void* value) const { WriteField<void*>("m4", value); }
    };
}
