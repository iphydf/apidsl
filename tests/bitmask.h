namespace toxav
{

/**
 * The call state is a set of operations that are currently being performed.
 * A value of 0 means we are neither sending nor receiving anything, meaning,
 * one of the sides requested pause. The call will be resumed once the side
 * that initiated pause resumes it.
 */
bitmask CALL_STATE {
  /**
   * The friend is sending audio (we are receiving).
   */
  SENDING_A,
  /**
   * The friend is sending video (we are receiving).
   */
  SENDING_V,
  /**
   * The friend is receiving audio (we are sending).
   */
  RECEIVING_A,
  /**
   * The friend is receiving video (we are sending).
   */
  RECEIVING_V,
  /**
   * The call has finished. This is the final state after which no more state
   * transitions can occur for the call.
   */
  END,
  /**
   * Set by the AV core if an error occurred on the remote end. This call
   * state will never be triggered in combination with other call states.
   */
  ERROR,
}

}
