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
        void NotePeace(int a, int b) const { void* args[] = { &a, &b }; CallStatic("NotePeace", args, 2); }
        void TakePending(void* into) const { void* args[] = { into }; CallStatic("TakePending", args, 1); }
        int64_t PairKey(int a, int b) const { void* args[] = { &a, &b }; return CallStaticValue<int64_t>("PairKey", args, 2); }
        int PairLo(int64_t key) const { void* args[] = { &key }; return CallStaticValue<int>("PairLo", args, 1); }
        int PairHi(int64_t key) const { void* args[] = { &key }; return CallStaticValue<int>("PairHi", args, 1); }
        bool CanStand(void* d, void* grid, int index) const { void* args[] = { d, grid, &index }; return CallStaticValue<bool>("CanStand", args, 3); }
        bool CanStand(void* d, void* grid, int x, int y) const { void* args[] = { d, grid, &x, &y }; return CallStaticValue<bool>("CanStand", args, 4); }
        bool InConflict(void* d, void* mil) const { void* args[] = { d, mil }; return CallStaticValue<bool>("InConflict", args, 2); }
        bool InConflict(void* mil) const { void* args[] = { mil }; return CallStaticValue<bool>("InConflict", args, 1); }
        void* HomePoint(void* d, void* mil, void* n, void* grid, void* connectivity) const { void* args[] = { d, mil, n, grid, connectivity }; return CallStatic("HomePoint", args, 5); }
        int HomeCell(void* d, void* mil, void* grid, void* connectivity, bool& supplied) const { void* args[] = { d, mil, grid, connectivity, &supplied }; return CallStaticValue<int>("HomeCell", args, 5); }
        bool TouchesRealm(void* grid, int i, int w, int host) const { void* args[] = { grid, &i, &w, &host }; return CallStaticValue<bool>("TouchesRealm", args, 4); }
        void* HomeWard(void* d, void* n, void* grid) const { void* args[] = { d, n, grid }; return CallStatic("HomeWard", args, 3); }
        void AimHome(void* d, void* home) const { void* args[] = { d, home }; CallStatic("AimHome", args, 2); }
    };
}
