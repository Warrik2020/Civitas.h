#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class Abroad : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Abroad(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "Abroad") {}
    public:
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        void NotePeace(int a, int b) const { void* __callArgs[] = { &a, &b }; CallStatic("NotePeace", __callArgs, 2); }
        void TakePending(void* into) const { void* __callArgs[] = { into }; CallStatic("TakePending", __callArgs, 1); }
        int64_t PairKey(int a, int b) const { void* __callArgs[] = { &a, &b }; return CallStaticValue<int64_t>("PairKey", __callArgs, 2); }
        int PairLo(int64_t key) const { void* __callArgs[] = { &key }; return CallStaticValue<int>("PairLo", __callArgs, 1); }
        int PairHi(int64_t key) const { void* __callArgs[] = { &key }; return CallStaticValue<int>("PairHi", __callArgs, 1); }
        bool CanStand(void* d, void* grid, int index) const { void* __callArgs[] = { d, grid, &index }; return CallStaticValue<bool>("CanStand", __callArgs, 3); }
        bool CanStand(void* d, void* grid, int x, int y) const { void* __callArgs[] = { d, grid, &x, &y }; return CallStaticValue<bool>("CanStand", __callArgs, 4); }
        bool InConflict(void* d, void* mil) const { void* __callArgs[] = { d, mil }; return CallStaticValue<bool>("InConflict", __callArgs, 2); }
        bool InConflict(void* mil) const { void* __callArgs[] = { mil }; return CallStaticValue<bool>("InConflict", __callArgs, 1); }
        void* HomePoint(void* d, void* mil, void* n, void* grid, void* connectivity) const { void* __callArgs[] = { d, mil, n, grid, connectivity }; return CallStatic("HomePoint", __callArgs, 5); }
        int HomeCell(void* d, void* mil, void* grid, void* connectivity, bool& supplied) const { void* __callArgs[] = { d, mil, grid, connectivity, &supplied }; return CallStaticValue<int>("HomeCell", __callArgs, 5); }
        bool TouchesRealm(void* grid, int i, int w, int host) const { void* __callArgs[] = { grid, &i, &w, &host }; return CallStaticValue<bool>("TouchesRealm", __callArgs, 4); }
        void* HomeWard(void* d, void* n, void* grid) const { void* __callArgs[] = { d, n, grid }; return CallStatic("HomeWard", __callArgs, 3); }
        void AimHome(void* d, void* home) const { void* __callArgs[] = { d, home }; CallStatic("AimHome", __callArgs, 2); }
    };
}
