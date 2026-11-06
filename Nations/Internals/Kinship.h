#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class Kinship : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Kinship(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "Kinship") {}
    public:
        void Refresh(void* nations, void* identity, int idCapacity) const { void* __callArgs[] = { nations, identity, &idCapacity }; Call("Refresh", __callArgs, 3); }
        int SharedMask(int a, int b) const { void* __callArgs[] = { &a, &b }; return CallValue<int>("SharedMask", __callArgs, 2); }
        float OpinionBetween(int a, int b) const { void* __callArgs[] = { &a, &b }; return CallValue<float>("OpinionBetween", __callArgs, 2); }
        float WeightOf(int axis) const { void* __callArgs[] = { &axis }; return CallStaticValue<float>("WeightOf", __callArgs, 1); }
        float OpinionOf(int mask) const { void* __callArgs[] = { &mask }; return CallStaticValue<float>("OpinionOf", __callArgs, 1); }
        int KeyOf(void* identity, int nationId, int axis) const { void* __callArgs[] = { identity, &nationId, &axis }; return CallStaticValue<int>("KeyOf", __callArgs, 3); }
        int KeyOfPick(void* identity, int groupId) const { void* __callArgs[] = { identity, &groupId }; return CallStaticValue<int>("KeyOfPick", __callArgs, 2); }
        int SharedMaskLive(void* identity, int a, int b) const { void* __callArgs[] = { identity, &a, &b }; return CallStaticValue<int>("SharedMaskLive", __callArgs, 3); }
        int StatesFlying(void* identity, void* nations, int axis, int key, int exceptId, void* dst) const { void* __callArgs[] = { identity, nations, &axis, &key, &exceptId, dst }; return CallStaticValue<int>("StatesFlying", __callArgs, 6); }
        void* Weight() const { return ReadStaticField<void*>("Weight"); }
    };
}
