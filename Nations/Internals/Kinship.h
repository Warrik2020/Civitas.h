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
        void Refresh(void* nations, void* identity, int idCapacity) const { void* args[] = { nations, identity, &idCapacity }; Call("Refresh", args, 3); }
        int SharedMask(int a, int b) const { void* args[] = { &a, &b }; return CallValue<int>("SharedMask", args, 2); }
        float OpinionBetween(int a, int b) const { void* args[] = { &a, &b }; return CallValue<float>("OpinionBetween", args, 2); }
        float WeightOf(int axis) const { void* args[] = { &axis }; return CallStaticValue<float>("WeightOf", args, 1); }
        float OpinionOf(int mask) const { void* args[] = { &mask }; return CallStaticValue<float>("OpinionOf", args, 1); }
        int KeyOf(void* identity, int nationId, int axis) const { void* args[] = { identity, &nationId, &axis }; return CallStaticValue<int>("KeyOf", args, 3); }
        int KeyOfPick(void* identity, int groupId) const { void* args[] = { identity, &groupId }; return CallStaticValue<int>("KeyOfPick", args, 2); }
        int SharedMaskLive(void* identity, int a, int b) const { void* args[] = { identity, &a, &b }; return CallStaticValue<int>("SharedMaskLive", args, 3); }
        int StatesFlying(void* identity, void* nations, int axis, int key, int exceptId, void* dst) const { void* args[] = { identity, nations, &axis, &key, &exceptId, dst }; return CallStaticValue<int>("StatesFlying", args, 6); }
        void* Weight() const { return ReadStaticField<void*>("Weight"); }
    };
}
