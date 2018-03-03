using Assets.script.Events;
using Assets.script.Events.Models;

namespace Assets.script.gameplay
{
	public class Block : IntEventInvoker
	{
		protected int Worth;

		protected virtual void Start()
		{
			Events.Add(EventName.SCORE_CHANGED_EVENT, new ScoreChangedEvent());
			EventManager.AddInvoker(EventName.SCORE_CHANGED_EVENT, this);
		}

		protected virtual void OnCollisionEnter2D()
		{
			Events[EventName.SCORE_CHANGED_EVENT].Invoke(Worth);
			Destroy(gameObject);
		}

		protected void OnBecameInvisible()
		{
			EventManager.RemoveInvoker(EventName.SCORE_CHANGED_EVENT, this);
			Destroy(gameObject);
		}
	}
}
