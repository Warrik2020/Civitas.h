#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class UnifyGen : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnifyGen(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "UnifyGen") {}
    public:
        void BuildTrunk(void* lib, void* r, void* f, void* names, int seed) const { void* __callArgs[] = { lib, r, &f, &names, &seed }; CallStatic("BuildTrunk", __callArgs, 5); }
        void* BuildBranch(void* lib, void* r, int target, void* f, void* names, int seed, int now) const { void* __callArgs[] = { lib, r, &target, &f, &names, &seed, &now }; return CallStatic("BuildBranch", __callArgs, 7); }
        bool Sync(void* lib, void* r, void* b, void* f, void* names, int seed) const { void* __callArgs[] = { lib, r, b, &f, &names, &seed }; return CallStaticValue<bool>("Sync", __callArgs, 6); }
        void* InsertAnswer(void* lib, void* r, void* b, void* def, const char* reaction, void* f, void* names, int seed, int salt = 0) const { void* managed_4 = Api() && Api()->NewString ? Api()->NewString(reaction ? reaction : "") : nullptr; void* __callArgs[] = { lib, r, b, def, managed_4, &f, &names, &seed, &salt }; return CallStatic("InsertAnswer", __callArgs, 9); }
        void* SwapOption(void* lib, void* r, void* b, const char* key, void* f, void* names, int seed) const { void* managed_3 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* __callArgs[] = { lib, r, b, managed_3, &f, &names, &seed }; return CallStatic("SwapOption", __callArgs, 7); }
        int SwapSlot(void* lib, void* b, const char* key) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* __callArgs[] = { lib, b, managed_2 }; return CallStaticValue<int>("SwapSlot", __callArgs, 3); }
        void* Roll(void* d, void* f, void* names, int seed, int self, int target, int epoch) const { void* __callArgs[] = { d, &f, &names, &seed, &self, &target, &epoch }; return CallStatic("Roll", __callArgs, 7); }
        float Round(int k, float v) const { void* __callArgs[] = { &k, &v }; return CallStaticValue<float>("Round", __callArgs, 2); }
        float TiesFloor(float opinion) const { void* __callArgs[] = { &opinion }; return CallStaticValue<float>("TiesFloor", __callArgs, 1); }
    };
}
