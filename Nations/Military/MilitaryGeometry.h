#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class MilitaryGeometry : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MilitaryGeometry(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "MilitaryGeometry") {}
    public:
        float ProbeOwn(void* from, void* dir, int nationId, void* grid, void* atWarEnemies, int maxSteps) const { void* args[] = { from, dir, &nationId, grid, atWarEnemies, &maxSteps }; return CallStaticValue<float>("ProbeOwn", args, 6); }
        float ProbeOwnStrict(void* from, void* dir, int nationId, void* grid, void* atWarEnemies, int maxSteps, bool& walled) const { void* args[] = { from, dir, &nationId, grid, atWarEnemies, &maxSteps, &walled }; return CallStaticValue<float>("ProbeOwnStrict", args, 7); }
        void BestEscape(void* from, int nationId, void* grid, void* atWarEnemies, int dirs, int maxSteps, void* escapeDir, float& escapeLen, int& enemyWalledDirs) const { void* args[] = { from, &nationId, grid, atWarEnemies, &dirs, &maxSteps, &escapeDir, &escapeLen, &enemyWalledDirs }; CallStatic("BestEscape", args, 9); }
        float CorridorWidth(void* at, void* axis, int nationId, void* grid, void* atWarEnemies, int maxSteps) const { void* args[] = { at, axis, &nationId, grid, atWarEnemies, &maxSteps }; return CallStaticValue<float>("CorridorWidth", args, 6); }
    };
}
